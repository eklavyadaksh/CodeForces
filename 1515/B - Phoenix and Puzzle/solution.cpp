#include <bits/stdc++.h>
using namespace std;
 
bool perfectSquare(int x) {
    int r = sqrt(x);
    return r * r == x;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        if ((n % 2 == 0 && perfectSquare(n / 2)) ||
            (n % 4 == 0 && perfectSquare(n / 4))) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
 
    return 0;
}