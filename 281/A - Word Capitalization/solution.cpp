#include<iostream>
 
#include<string>
#include<set>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char ch;
    for(int i=0;i<s.length();i++){
        if(i==0){
            ch=s[i];
            ch=toupper(ch);
            s[i]=ch;
        }
    }
   cout<<s;
  
}