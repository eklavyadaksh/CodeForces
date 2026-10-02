#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	int c1=0,c2=0;
	cin>>s;
	for(char c:s){
	    if(c>=65 && c<=90 )c1++;
	    else c2++;
	}
	if(c1>c2){
	    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return std::toupper(c);
    });
    cout<<s<<endl;
	}
	else{
	    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    cout<<s<<endl;
	}
 
}