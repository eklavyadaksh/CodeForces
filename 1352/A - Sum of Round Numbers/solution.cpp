#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k=0;
	    vector<int> ans;
	    string s=to_string(n);
	    for(int i=0;i<s.length();i++){
	        int digit=s[i]-'0';
	    int power = s.length() - 1 - i;
        int placeValue = digit * round(pow(10, power));
        if(placeValue !=0){ans.push_back(placeValue);
        k++;
        }
 
	   }
	   cout<<k;
	   cout<<"
";
	    for(auto x:ans){
	        cout<<x<<" ";
	    }
	    cout<<"
";
	}
 
}