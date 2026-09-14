#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int w, h;
        long long n;
        cin >> w >> h >> n;
 
        long long pieces = 1;
 
        while (w % 2 == 0) {
            pieces *= 2;
            w /= 2;
        }
 
        while (h % 2 == 0) {
            pieces *= 2;
            h /= 2;
        }
 
        if (pieces >= n)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}