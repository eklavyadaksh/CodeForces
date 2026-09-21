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
 
        // If first character is 1, the sorted string
        // must be 111...111.
        if (s[0] == '1') {
            int ans = 0;
 
            for (char c : s) {
                if (c == '0')
                    ans++;
            }
 
            cout << ans << '
';
            continue;
        }
 
        // s[0] == '0'
 
        int totalOnes = 0;
        for (char c : s) {
            if (c == '1')
                totalOnes++;
        }
 
        // Option 1: make everything 0.
        int ans = totalOnes;
 
        int onesBefore = 0;
        int zerosAfter = 0;
 
        // Initially, zeros after the current position.
        for (char c : s) {
            if (c == '0')
                zerosAfter++;
        }
 
        for (int i = 0; i < n; i++) {
 
            // Remove current character from "after".
            if (s[i] == '0') {
                zerosAfter--;
            }
 
            if (s[i] == '1') {
                // Suppose this is the first 1
                // in the final sorted string.
                int operations = onesBefore + zerosAfter;
                ans = min(ans, operations);
 
                onesBefore++;
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}