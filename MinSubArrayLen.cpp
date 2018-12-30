
/*
Given an array of n positive integers and a positive integer s, find the minimal length of a contiguous subarray of which the sum ≥ s.
 If there isn't one, return 0 instead.
 
Example: 
Input: s = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: the subarray [4,3] has the minimal length under the problem constraint.
*/

int MinSubArrayLen(int s, vector<int>& nums)  // Traversing array to gain  the smallest number
{
        int left = 0;
        int right = -1;
        int length = nums.size() + 1;
        int sum = 0;
        while (left < nums.size()) {
            
            if (sum < s && right + 1 < nums.size()) { // explain need add the number of array
                right ++;
                sum += nums[right];
            } else { //explain sum beyond the s
                sum -= nums[left] ; 
                left ++;
            }
            if (sum >= s) length = min(length, right - left + 1); // They don't need to return the exact number.They only need a number 
        }
        if (length == nums.size() + 1) return 0;
        return length;
    }
