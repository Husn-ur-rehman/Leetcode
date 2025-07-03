#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        vector<long> nums;
        nums.push_back(1);
        nums.push_back(2);
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]+nums[i+1]);
        }
        return nums[n-1];
    }
};