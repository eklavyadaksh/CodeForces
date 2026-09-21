#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(abs(a-b),abs(a+c-b))<<endl;
}
}