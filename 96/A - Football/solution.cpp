#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	cin>>s;
	if(s.length()<7)cout<<"NO"<<endl;
	else{
	    string t1="1111111";
	    string t2="0000000";
	    if(s.contains(t1) || s.contains(t2))cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
 
}