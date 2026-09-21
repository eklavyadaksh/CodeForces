#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(3),ans(3);
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    for(int i=0;i<3;i++){
        if(v[i]<n)ans.push_back(n-v[i]);
    }
    int maxi=*max_element(ans.begin(), ans.end());
    cout<<maxi<<endl;
    
}
}