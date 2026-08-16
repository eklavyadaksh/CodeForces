#include<iostream>
#include <vector>
using namespace std;
int main()
{
int a,b,count=0;
cin>>a>>b;
vector<int> part(a);
for(int i=0;i<a;i++){
    cin>>part[i];
}
for(int i=0;i<a;i++){
    if (part[i] >= part[b - 1] && part[i] > 0) count++;
}
cout<<count;
return 0;
}