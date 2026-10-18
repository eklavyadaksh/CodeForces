#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int first, last, x;
 
        cin >> first;
        last = first;
 
        for (int i = 1; i < n; i++) {
            cin >> x;
            last = x;
        }
 
        cout << gcd(first, last) << '
';
    }
 
    return 0;
}