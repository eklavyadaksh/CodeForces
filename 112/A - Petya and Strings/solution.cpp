#include<iostream>
#include <vector>
#include <algorithm> // Required for std::transform
#include <cctype>    // Required for std::tolower
 
using namespace std;
int main()
{
string a,b;
cin>>a;
 
cin>>b;
transform(a.begin(), a.end(), a.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    transform(b.begin(), b.end(), b.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    int result = a.compare(b);
    cout<<result;
return 0;
}