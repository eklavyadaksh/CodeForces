#include <bits/stdc++.h>
using namespace std;
 
int main() {
int k,r,ans=0;
cin>>k>>r;
int i=1;
while(i>0){
    int num=i*k;
    if(num%10==0 || (num-r)%10==0){
        ans=i;
        break;
    }
    i++;
}
cout<<i;
}