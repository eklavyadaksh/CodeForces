#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,k;
	cin>>n>>k;
	while(k--){
	string s=to_string(n);
	char a=s[s.length()-1];
	if((int)a!='0')n=n-1;
	else n=n/10;
	}
	cout<<n;
}