#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, x;
        cin >> n >> x;
 
        vector<int> v(n);
        int odd = 0, even = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> v[i];
 
            if (v[i] % 2 == 0)
                even++;
            else
                odd++;
        }
 
        bool possible = false;
 
        for (int k = 1; k <= x; k += 2) {
            if (k <= odd && x - k <= even) {
                possible = true;
                break;
            }
        }
 
        if (possible)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}