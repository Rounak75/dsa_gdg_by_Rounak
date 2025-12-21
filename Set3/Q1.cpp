#include <bits/stdc++.h>
using namespace std;    

int removeDuplicates(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(auto x : nums){
      cout<<x;
    }
    return 0;
}

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    removeDuplicates(nums);
    return 0;
}