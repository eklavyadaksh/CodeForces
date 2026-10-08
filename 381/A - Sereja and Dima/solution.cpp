#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> nums(n);
 
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
 
    int count1 = 0, count2 = 0;
    int left = 0, right = n - 1;
    int i = 1;
 
    while(left <= right) {
 
        if(nums[left] > nums[right]) {
            if(i % 2 == 1)
                count1 += nums[left];
            else
                count2 += nums[left];
 
            left++;
        }
        else {
            if(i % 2 == 1)
                count1 += nums[right];
            else
                count2 += nums[right];
 
            right--;
        }
 
        i++;
    }
 
    cout << count1 << " " << count2 << endl;
}