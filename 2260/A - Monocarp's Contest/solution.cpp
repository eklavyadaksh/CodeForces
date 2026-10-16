#include <bits/stdc++.h>
using namespace std;
 
int main() {
     int t;
     cin>>t;
     while(t--){
         int n,count=0,cnt=0;
         cin>>n;
         vector<int> v(n);
         for(int i=0;i<n;i++){
             cin>>v[i];
             if(v[i]==0)count++;
             else cnt++;
         }
         if(count<2)cout<<-1<<endl;
         else{
             int left=0,right=v.size()-1;
            
             
                 int sum=v[left]+v[right];
                 if(sum==1 )cout<<1<<endl;
                 else if(sum==2)cout<<2<<endl;
                 else cout<<0<<endl;
             
         }
         
     }
 
}