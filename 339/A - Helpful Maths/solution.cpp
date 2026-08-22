#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.length();
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '+') continue;
 
        for (int j = i + 1; j < n; j++) {
            if (s[j] == '+') continue;
 
            if (s[i] > s[j]) {
                swap(s[i], s[j]);
            }
        }
    }
 
    cout << s;
 
    return 0;
}