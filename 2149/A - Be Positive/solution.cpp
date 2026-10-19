#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
    int n,c1=0,c2=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==-1)c1++;
        if(v[i]==0)c2++;
    }
    if(c1==1)cout<<2+c2<<endl;
   else  cout<<2*(c1%2)+c2<<endl;
}
 
}