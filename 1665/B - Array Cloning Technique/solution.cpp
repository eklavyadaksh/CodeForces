#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> v(n);
 
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
 
        sort(v.begin(), v.end());
 
        int mx = 1;
 
        for (int i = 1; i < n; i++) {
            if (v[i] == v[i - 1]) {
                mx++;
            } else {
                mx = max(mx, 1);
            }
        }
 
        // The above loop needs the maximum frequency.
        int maxFreq = 1;
        int current = 1;
 
        for (int i = 1; i < n; i++) {
            if (v[i] == v[i - 1]) {
                current++;
            } else {
                maxFreq = max(maxFreq, current);
                current = 1;
            }
        }
 
        maxFreq = max(maxFreq, current);
 
        int ans = 0;
        int have = maxFreq;
 
        while (have < n) {
            int add = min(have, n - have);
 
            ans++;       // clone
            ans += add;  // swaps
 
            have += add;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}