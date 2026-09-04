#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k,n,w;
    cin>>k>>n>>w;
    
    int val=(k*w)+(w*(w-1)*k)/2;
    if(n>val)cout<<0;
    else cout<<val-n;
 
}