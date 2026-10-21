#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        int cnt = count(s.begin(), s.end(), '1');
 
        if (cnt == 1) {
            cout << 0 << '
';
        } 
        else if (cnt == 2) {
            cout << 1 << '
';
        } 
        else {
            int l = s.find('1');
            int r = s.rfind('1');
 
            cout << r - l << '
';
        }
    }
 
    return 0;
}