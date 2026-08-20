#include<iostream>
 
#include<string>
#include<set>
using namespace std;
int main()
{
    string s;
    cin>>s;
   
  
    set<char> st;
    
    for(char ch:s){
        st.insert(ch);
    }
 
   
    int n=st.size();
    if(n%2==0)cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
 
 
    return 0;
    
 
}