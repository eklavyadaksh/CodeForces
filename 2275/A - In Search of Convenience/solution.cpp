#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int x0, y0, r;
        cin >> x0 >> y0 >> r;
 
        for (int i = -r; i <= r; i++) {
            for (int j = -r; j <= r; j++) {
                if (i * i + j * j == r * r) {
                    cout << x0 + i << " " << y0 + j << endl;
                    goto next;
                }
            }
        }
 
        next:;
    }
}