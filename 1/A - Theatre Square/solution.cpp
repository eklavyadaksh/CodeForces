#include<iostream>
#include <vector>
#include <cmath> 
using namespace std;
int main()
{
int m,n,a;
cin>>m>>n>>a;
long long x1=(m+a-1)/a;
long long  x2=(n+a-1)/a;
cout<<x1*x2<<endl;
return 0;
}