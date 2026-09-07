#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n;
	cin>>n;
	int count=0;
 
	string s=to_string(n);
	for(auto x:s){
	    if(x=='4' || x=='7')count++;
	}
	if(count==4 || count==7)cout<<"YES";
	else cout<<"NO";
  
   
 
}