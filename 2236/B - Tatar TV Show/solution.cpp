#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
 
        vector<int> cnt(k, 0);
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                cnt[i % k]++;
            }
        }
 
        bool possible = true;
 
        for (int i = 0; i < k; i++) {
            if (cnt[i] % 2 != 0) {
                possible = false;
                break;
            }
        }
 
        cout << (possible ? "YES" : "NO") << '
';
    }
 
    return 0;
}