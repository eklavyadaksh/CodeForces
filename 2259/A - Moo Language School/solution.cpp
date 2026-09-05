#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
  
    while(t--){
    int n,k;
   cin>>n>>k;
    int  answer=0;
   string s;
   cin>>s;
   for(int i=0;i<s.length();i+=k){
   string farm = s.substr(i, k);
 
if (farm.find('0') == string::npos)
    answer++;
   
   }
   cout<<answer<<endl;
   }
  
 
}