#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    int c=abs(a-b);
	    if(c==0)cout<<0<<endl;
	    else{
	        cout<<(c+10-1)/10<<endl;
	    }
	    
	}
	
 
}