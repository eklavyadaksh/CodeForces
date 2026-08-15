#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
int count=0;
while(t--){
    int  A,B,C;
    cin>>A>>B>>C;
    if((A || B)&& (B|| C)&& (A|| C))count++;
}
cout<<count;
return 0;
}