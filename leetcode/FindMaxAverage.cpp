
/*
Given an array consisting of n integers, find the contiguous subarray of given length k that has the maximum average value. And you need to output the maximum average value.

Example 1:
Input: [1,12,-5,-6,50,3], k = 4
Output: 12.75
Explanation: Maximum average is (12-5-6+50)/4 = 51/4 = 12.75
Note:
1 <= k <= n <= 30,000.
Elements of the given array will be in the range [-10,000, 10,000].
*/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int vec[nums.size()+1];
        vec[0]=0;
        double max=LLONG_MIN;
        for(int i=0;i<nums.size();i++)
        {
            vec[i+1]=nums[i]+vec[i];   //The value of the sum of the preceding n items is stored;
        }
      
        for(int j=k;j<nums.size()+1;j++)
        {
            max=max>(vec[j]-vec[j-k])?max:(vec[j]-vec[j-k]);  //Seeking maximum
        }
        return (max/k);
    }
};