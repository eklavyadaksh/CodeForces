#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int q;
cin>>q;
sort(v.begin(),v.end());
for(int i=0;i<q;i++){
    int x,count=0;
    cin>>x;
    int low=0,high=v.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
           if (v[mid] <= x) {
        count = mid + 1;
        low = mid + 1;
    } else {
        high = mid - 1;
    }
    }
    cout<<count<<endl;
}
 
 
}