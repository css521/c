/*
Given a non-empty array containing only positive integers, find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.

Note:
Each of the array element will not exceed 100.
The array size will not exceed 200.
Example 1:

Input: [1, 5, 11, 5]

Output: true

Explanation: The array can be partitioned as [1, 5, 5] and [11].
Example 2:

Input: [1, 2, 3, 5]

Output: false

Explanation: The array cannot be partitioned into equal sum subsets.
*/

class Solution {
public:
    bool canPartition(vector<int>& nums) 
    {
        int sum=0;
        for(auto i:nums)sum+=i;
        if(sum&1)return false;
        int mid=sum/2;
		vector<bool> dp(sum + 1, 0);
		dp[0] = true;
		for (auto &i : nums)
		{
			for (int j = sum; j >= 0; j--)
			{
				if (dp[j])dp[i + j] = true;
			}
			if (dp[sum / 2])
			{
				//for(auto i:dp)cout<<i<<" ";
				return true;
			}
		}
        return false;   
    }
};