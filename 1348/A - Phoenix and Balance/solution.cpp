#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
    int n,a=0,b=0;
    cin>>n;
    for(int i=1;i<=(n/2)-1;i++){
        a+=pow(2,i);
    }
    a+=pow(2,n);
    for(int i=n/2;i<n;i++){
        b+=pow(2,i);
    }
    cout<<abs(a-b)<<endl;
    
 
}
}