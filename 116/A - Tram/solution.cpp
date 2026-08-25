#include<iostream>
 
#include<string>
#include<set>
#include <cctype>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int total=0;
    int maxi=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        total-=a;
        total+=b;
        
         maxi=max(maxi,total);
    }
    cout<<maxi;
    return 0;
  
}