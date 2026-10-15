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
 
        string s;
        cin >> s;
 
        string temp = s;
 
       
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == '0' &&
                s[i - 1] == '1' &&
                s[i + 1] == '1') {
                temp[i] = '1';
            }
        }
 
        int mx = count(temp.begin(), temp.end(), '1');
        int mn = 0;
 
       
        for (int i = 0; i < n;) {
            if (temp[i] == '0') {
                i++;
                continue;
            }
 
            int j = i;
            while (j < n && temp[j] == '1') {
                j++;
            }
 
            int len = j - i;
            mn += len / 2 + 1;
            i = j;
        }
 
        cout << mn << ' ' << mx << '
';
    }
 
    return 0;
}