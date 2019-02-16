
/*
Given an unsorted integer array, find the smallest missing positive integer.

Example 1:

Input: [1,2,0]
Output: 3
Example 2:

Input: [3,4,-1,1]
Output: 2
Example 3:

Input: [7,8,9,11,12]
Output: 1
*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<bool> tmp(nums.size(),0);
        for(int i:nums)
        {
            if(i<=0 || i>nums.size())   continue;
            tmp[i-1]=1;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!tmp[i])
                return i+1;
        }
        return nums.size()+1;
    }
};