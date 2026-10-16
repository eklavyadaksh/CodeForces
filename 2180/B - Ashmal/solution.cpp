#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s = "";
 
        for (int i = 0; i < n; i++) {
            string x;
            cin >> x;
 
            if (x + s < s + x) {
                s = x + s;
            } else {
                s = s + x;
            }
        }
 
        cout << s << '
';
    }
 
    return 0;
}