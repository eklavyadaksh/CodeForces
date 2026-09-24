#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
    int a,b,count=0;
    cin>>a>>b;
    if(a==b){cout<<0<<endl;
    continue;
    }
    else if(b>a){
        if((b-a)%2!=0){
            count++;
        
        }
        else {
            count+=2;
            
        }
    }
    
    else{
        if((a-b)%2==0){
            count++;
          
        }
        else {
            count+=2;
            
        }
    }
 
    cout<<count<<endl;
}
}