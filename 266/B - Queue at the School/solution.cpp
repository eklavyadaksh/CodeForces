#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n,t;
cin>>n>>t;
string s;
cin>>s;
int a=t-1;
while(t--){
    for(int i=0;i<s.size()-1;){
        if(s[i]=='B' && s[i+1]=='G'){
            swap(s[i],s[i+1]);
            i+=2;
        }
        else{
            i++;
        }
    }
}
cout<<s;
}