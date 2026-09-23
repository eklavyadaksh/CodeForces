#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int t1=0,t0=0,ans=INT_MAX;
    for(auto x:s){
        if(x=='0')t0++;
        else t1++;
    }
    int l0=0,l1=0;
    for(auto x:s){
        if(x=='0'){
            l0++;
            
        }
        else{
            l1++;
        }
        int r0=t0-l0;
        int r1=t1-l1;
        int c0=l0+r1;
        int c2=l1+r0;
        ans=min({ans,c0,c2});
    }
    
    
    cout<<ans<<endl;
    
}
 
 
}