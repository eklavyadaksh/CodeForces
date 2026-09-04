#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,ans=0;
cin>>n;
 
 
for(int i=999;i<9999;i++){
    string s=to_string(i);
unordered_map<char,int> mp;
for(auto x:s){
    mp[x]++;
}
    if(i>n && mp.size()==4){
        ans=i;
        break;
    }
    
}
cout<<ans;
}