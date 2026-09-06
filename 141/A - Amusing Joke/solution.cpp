#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    unordered_map<char,int> mp1,mp2;
    for(auto x:s1)mp1[x]++;
    for(auto x:s2)mp1[x]++;
    for(auto x:s3)mp2[x]++;
    if(mp1==mp2)cout<<"YES";
    else cout<<"NO";
 
}