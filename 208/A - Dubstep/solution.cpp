#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    string s;
    cin>>s;
    string sub="WUB";
   string result;
 int start = 0;
size_t pos = s.find(sub);
while ((pos = s.find(sub, start)) != string::npos) {
    result += s.substr(start, pos - start);
    start = pos + sub.length();
     result+=" ";
}
 
result += s.substr(start);
cout<<result;
}