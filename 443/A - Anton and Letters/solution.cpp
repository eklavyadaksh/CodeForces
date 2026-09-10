#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
    int count = 0;
    vector<char> ch;
 
    for (auto x : s) {
        if (isalpha(static_cast<unsigned char>(x))) {
            // If x is NOT found in the vector, add it and increment count
            if (!(std::find(ch.begin(), ch.end(), x) != ch.end())) {
                ch.push_back(x);
                count++;
            }
        }
    } // <-- Added missing loop brace
 
    cout << count << endl; // <-- Moved outside the loop to print the final answer once
 
    return 0; 
} // <-- Added missing main function brace