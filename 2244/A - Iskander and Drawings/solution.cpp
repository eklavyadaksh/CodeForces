#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int current = 0;
        int ans = 0;
 
        for (char c : s) {
            if (c == '#') {
                current++;
            } else {
                ans = max(ans, (current + 1) / 2);
                current = 0;
            }
        }
 
        ans = max(ans, (current + 1) / 2);
 
        cout << ans << '
';
    }
 
    return 0;
}