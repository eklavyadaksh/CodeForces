#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        long long a1, b1, x;
        cin >> a1;
        for (int i = 1; i < n; i++) {
            cin >> x;
        }
 
        cin >> b1;
        for (int i = 1; i < m; i++) {
            cin >> x;
        }
 
        long long A = a1 + n - 1;
        long long B = b1 + m - 1;
 
        cout << (A >= B ? 1 : 2) << '
';
    }
 
    return 0;
}