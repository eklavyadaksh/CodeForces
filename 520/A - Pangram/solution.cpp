#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n;
cin>>n;
string s;
cin>>s;
vector<char> vec;
std::vector<char> alphabet;
    for(char &c : s) {
    c = tolower(c);
}
 
for(char x:s){
    if(find(vec.begin(), vec.end(), x) == vec.end())vec.push_back(x);
}
 
    
    for (char c = 'a'; c <= 'z'; ++c) {
        alphabet.push_back(c);
    }
    if(alphabet.size()==vec.size())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
}