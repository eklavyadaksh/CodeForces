#include <bits/stdc++.h>
using namespace std;
 
int possible(int a, int b) {
    if (b <= a && (a - b) % 2 == 0)
        return a;
 
    if (b <= a + 1 && (a + 1 - b) % 2 == 0)
        return a + 1;
 
    return -1;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << possible(a, b) << '
';
    }
 
    return 0;
}