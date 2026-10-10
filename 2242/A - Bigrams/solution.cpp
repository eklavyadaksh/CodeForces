#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
    int k;
    cin>>k;
    int count=0;
    vector<int> v(k);
   
    for(int i=0;i<k;i++){
        cin>>v[i];
        if(v[i]>=2)count++;
    }
    int a=*std::max_element(v.begin(), v.end());
    if(count>1 || a>2)cout<<"YES"<<endl;
    
    else cout<<"NO"<<endl;
   
    
    
}
 
}