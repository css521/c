
/*
Given a binary array, find the maximum number of consecutive 1s in this array.

Example 1:
Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
     int max=0,count=0;
        for(auto& it:nums)
        {
            if(it==1)
                count++;
            else
            {
                max=max>count?max:count;
                 count=0;
            }
        }
        return count>max?count:max;// nums=[1] count=1 max=0 return count
    }
};