#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int j=0,count=1,ans=1;
while(j<n-1){
   if(v[j]<v[j+1]){
       count++;
       ans=max(ans,count);
      
   }
  
   else {
       count=1;
       
   }
    j++;
}
cout<<ans;
}