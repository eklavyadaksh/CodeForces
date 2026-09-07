#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int size1,size2;
	std::vector<int> vec1;
    std::vector<int> vec2;
 
    if (std::cin >> size1) { 
        vec1.resize(size1); // Allocate memory so vec1[i] is safe
        for (int i = 0; i < size1; ++i) {
            std::cin >> vec1[i];
        }
    }
    
    if (std::cin >> size2) { 
        vec2.resize(size2); // Allocate memory so vec2[i] is safe
        for (int i = 0; i < size2; ++i) {
            std::cin >> vec2[i];
        }
    }
        	unordered_set<int> st;
        st.insert(vec1.begin(), vec1.end());
          st.insert(vec2.begin(), vec2.end());
        	vector<int> ans(st.begin(),st.end());
        	int max=*max_element(ans.begin(),ans.end());
        	if(ans.size()==n)cout<<"I become the guy.";
        	else cout<<"Oh, my keyboard!";
 
}