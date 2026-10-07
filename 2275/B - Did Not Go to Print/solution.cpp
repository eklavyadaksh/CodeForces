#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        string s;
        cin>>s;
 
        vector<int>v;
        vector<int>p(n+1,0);
 
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                v.push_back(i+1);
            }
            else if(s[i]=='2'){
                if(v.size()){
                    p[v.back()]=1;
                    v.pop_back();
                }
                else{
                    p[i+1]=1;
                }
            }
            else{
                p[i+1]=1;
            }
        }
 
        vector<int>a;
 
        for(int i=1;i<=n;i++){
            if(!p[i])
                a.push_back(i);
        }
 
        cout<<a.size()<<endl;
 
        for(int x:a)
            cout<<x<<" ";
 
        cout<<endl;
    }
}