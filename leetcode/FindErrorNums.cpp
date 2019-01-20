/*
The set S originally contains numbers from 1 to n. But unfortunately, due to the data error, one of the numbers in the set got duplicated to another number in the set, which results in repetition of one number and loss of another number.

Given an array nums representing the data status of this set after the error. Your task is to firstly find the number occurs twice and then find the number that is missing. Return them in the form of an array.

Example 1:
Input: nums = [1,2,2,4]
Output: [2,3]
*/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int i,j;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-1;i++)
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i);
                break;
            }
        for(j=0;j<nums.size();j++)
            if(j+1!=nums[j])
                break;
        return {nums[i],j+1};
       
    }
};