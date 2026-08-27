#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const int MAXX = 10;
const int BLOCK = 16;
const ll INF = 4'000'000'000'000'000'000LL;
 
int X;
 
struct Matrix {
    ll a[MAXX][MAXX];
 
    Matrix() {
        for (int i = 0; i < MAXX; i++)
            for (int j = 0; j < MAXX; j++)
                a[i][j] = INF;
    }
};
 
Matrix identityMatrix() {
    Matrix res;
 
    for (int i = 0; i < X; i++)
        res.a[i][i] = 0;
 
    return res;
}
 
// Min-plus multiplication
Matrix multiply(const Matrix &A, const Matrix &B) {
    Matrix C;
 
    for (int i = 0; i < X; i++) {
        for (int k = 0; k < X; k++) {
            if (A.a[i][k] == INF)
                continue;
 
            for (int j = 0; j < X; j++) {
                if (B.a[k][j] == INF)
                    continue;
 
                C.a[i][j] = min(
                    C.a[i][j],
                    A.a[i][k] + B.a[k][j]
                );
            }
        }
    }
 
    return C;
}
 
/*
    Append one platform to an existing matrix.
 
    This is the important optimization.
 
    A normal matrix multiplication would be O(X^3).
    For one platform, the cost for different input states
    has only two possible values, so prefix/suffix minima
    reduce this to O(X^2).
*/
Matrix appendPlatform(
    const Matrix &left,
    int len,
    ll penalty
) {
    Matrix res;
 
    for (int row = 0; row < X; row++) {
 
        ll pref[MAXX + 1];
        ll suff[MAXX + 1];
 
        pref[0] = INF;
 
        for (int k = 0; k < X; k++) {
            pref[k + 1] = min(pref[k], left.a[row][k]);
        }
 
        suff[X] = INF;
 
        for (int k = X - 1; k >= 0; k--) {
            suff[k] = min(suff[k + 1], left.a[row][k]);
        }
 
        for (int col = 0; col < X; col++) {
 
            /*
                Position of the output relative to the
                beginning of this platform.
            */
            int target = len - X + 1 + col;
 
            /*
                The output position is still before the
                end of the platform.
 
                Therefore the state is simply copied.
            */
            if (target <= 0) {
                int input = target + X - 1;
                res.a[row][col] = left.a[row][input];
                continue;
            }
 
            /*
                Number of paid jumps depends on the input
                position. There are only two possibilities.
            */
            int shifted = len + col - X;
 
            int quotient = shifted / X;
            int remainder = shifted % X;
 
            if (remainder > 0 && pref[remainder] != INF) {
                res.a[row][col] =
                    pref[remainder]
                    + 1LL * (quotient + 1) * penalty;
            }
 
            if (suff[remainder] != INF) {
                res.a[row][col] =
                    min(
                        res.a[row][col],
                        suff[remainder]
                        + 1LL * quotient * penalty
                    );
            }
        }
    }
 
    return res;
}
 
/*
    Apply a single platform directly to a DP state.
*/
array<ll, MAXX> applyPlatform(
    const array<ll, MAXX> &state,
    int len,
    ll penalty
) {
    ll pref[MAXX + 1];
    ll suff[MAXX + 1];
 
    pref[0] = INF;
 
    for (int k = 0; k < X; k++) {
        pref[k + 1] = min(pref[k], state[k]);
    }
 
    suff[X] = INF;
 
    for (int k = X - 1; k >= 0; k--) {
        suff[k] = min(suff[k + 1], state[k]);
    }
 
    array<ll, MAXX> res;
    res.fill(INF);
 
    for (int col = 0; col < X; col++) {
 
        int target = len - X + 1 + col;
 
        // Still inside the previous boundary window.
        if (target <= 0) {
            res[col] = state[target + X - 1];
            continue;
        }
 
        int shifted = len + col - X;
 
        int quotient = shifted / X;
        int remainder = shifted % X;
 
        if (remainder > 0 && pref[remainder] != INF) {
            res[col] =
                pref[remainder]
                + 1LL * (quotient + 1) * penalty;
        }
 
        if (suff[remainder] != INF) {
            res[col] =
                min(
                    res[col],
                    suff[remainder]
                    + 1LL * quotient * penalty
                );
        }
    }
 
    return res;
}
 
array<ll, MAXX> applyMatrix(
    const array<ll, MAXX> &state,
    const Matrix &mat
) {
    array<ll, MAXX> res;
    res.fill(INF);
 
    for (int i = 0; i < X; i++) {
        if (state[i] == INF)
            continue;
 
        for (int j = 0; j < X; j++) {
            if (mat.a[i][j] == INF)
                continue;
 
            res[j] = min(
                res[j],
                state[i] + mat.a[i][j]
            );
        }
    }
 
    return res;
}
 
/*
    Segment tree over BLOCK matrices.
 
    We store one matrix for every 16 consecutive platforms,
    not one matrix per platform.
*/
class BlockTree {
private:
    vector<int> &d;
    vector<ll> &s;
 
    int blocks;
    int size;
 
    vector<Matrix> tree;
 
    void rebuildBlock(int block) {
        Matrix cur = identityMatrix();
 
        int L = block * BLOCK;
        int R = min((int)d.size(), L + BLOCK);
 
        for (int i = L; i < R; i++) {
            cur = appendPlatform(cur, d[i], s[i]);
        }
 
        tree[size + block] = cur;
    }
 
public:
    BlockTree(
        vector<int> &d,
        vector<ll> &s
    ) : d(d), s(s) {
 
        blocks =
            ((int)d.size() + BLOCK - 1) / BLOCK;
 
        size = 1;
 
        while (size < blocks)
            size <<= 1;
 
        tree.resize(
            2 * size,
            identityMatrix()
        );
 
        for (int b = 0; b < blocks; b++)
            rebuildBlock(b);
 
        for (int node = size - 1; node >= 1; node--) {
            tree[node] =
                multiply(
                    tree[node * 2],
                    tree[node * 2 + 1]
                );
        }
    }
 
    void update(int index) {
 
        int block = index / BLOCK;
 
        rebuildBlock(block);
 
        int node = (size + block) / 2;
 
        while (node > 0) {
 
            tree[node] =
                multiply(
                    tree[node * 2],
                    tree[node * 2 + 1]
                );
 
            node >>= 1;
        }
    }
 
    /*
        Apply all complete blocks in [L, R).
    */
    array<ll, MAXX> apply(
        array<ll, MAXX> state,
        int L,
        int R
    ) const {
 
        vector<int> leftNodes;
        vector<int> rightNodes;
 
        L += size;
        R += size;
 
        while (L < R) {
 
            if (L & 1) {
                leftNodes.push_back(L);
                L++;
            }
 
            if (R & 1) {
                --R;
                rightNodes.push_back(R);
            }
 
            L >>= 1;
            R >>= 1;
        }
 
        // Left side is already in correct order.
        for (int node : leftNodes) {
            state = applyMatrix(
                state,
                tree[node]
            );
        }
 
        // Right nodes were collected backwards.
        for (int i = (int)rightNodes.size() - 1;
             i >= 0;
             i--) {
 
            state = applyMatrix(
                state,
                tree[rightNodes[i]]
            );
        }
 
        return state;
    }
};
 
ll answerQuery(
    int L,
    int R,
    const vector<int> &d,
    const vector<ll> &s,
    const BlockTree &tree
) {
    /*
        Initial state.
 
        We start exactly at the first cell of platform L.
    */
    array<ll, MAXX> state;
    state.fill(INF);
 
    for (int col = 0; col < X; col++) {
 
        int target =
            d[L] - X + 1 + col;
 
        if (target < 1)
            continue;
 
        int paidJumps =
            (target - 1 + X - 1) / X;
 
        state[col] =
            1LL * paidJumps * s[L];
    }
 
    /*
        Process platforms after L until reaching a block
        boundary.
    */
    int pos = L + 1;
 
    while (
        pos <= R &&
        pos % BLOCK != 0
    ) {
        state =
            applyPlatform(
                state,
                d[pos],
                s[pos]
            );
 
        pos++;
    }
 
    /*
        Complete blocks.
    */
    int firstBlock =
        pos / BLOCK;
 
    int lastBlock =
        (R + 1) / BLOCK;
 
    if (firstBlock < lastBlock) {
 
        state =
            tree.apply(
                state,
                firstBlock,
                lastBlock
            );
 
        pos =
            lastBlock * BLOCK;
    }
 
    /*
        Process the remaining partial block.
    */
    while (pos <= R) {
 
        state =
            applyPlatform(
                state,
                d[pos],
                s[pos]
            );
 
        pos++;
    }
 
    /*
        The last state corresponds to the last cell
        of platform R.
    */
    return state[X - 1];
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, q;
 
    cin >> n >> q >> X;
 
    vector<int> d(n);
    vector<ll> s(n);
 
    for (int &v : d)
        cin >> v;
 
    for (ll &v : s)
        cin >> v;
 
    BlockTree tree(d, s);
 
    while (q--) {
 
        char type;
        cin >> type;
 
        if (type == '1') {
 
            int i, v;
            cin >> i >> v;
 
            --i;
 
            d[i] = v;
 
            tree.update(i);
 
        }
        else if (type == '2') {
 
            int i;
            ll v;
 
            cin >> i >> v;
 
            --i;
 
            s[i] = v;
 
            tree.update(i);
 
        }
        else {
 
            int l, r;
            cin >> l >> r;
 
            --l;
            --r;
 
            cout
                << answerQuery(
                    l,
                    r,
                    d,
                    s,
                    tree
                )
                << '
';
        }
    }
 
    return 0;
}