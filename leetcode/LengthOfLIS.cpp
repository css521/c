
/*
Given an unsorted array of integers, find the length of longest increasing subsequence.

Example:
Input: [10,9,2,5,3,7,101,18]
Output: 4 
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4. 
*/
   int LengthOfLIS(vector<int>& nums) 
    {
        vector<int>temp;
        int max=0,temp1=0;
        for(int i=0;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            temp1=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {    
                if(temp1<nums[j])
                {
                    temp.push_back(nums[j]);
                    temp1=nums[j];
                }
                else if(temp1>nums[j]&&nums[j]>temp[temp.size()-2])   //Smaller than the tailender but larger than the penultimate 
                {
                    temp.pop_back();
                    temp.push_back(nums[j]);
                    temp1=nums[j];
                }
            }
         max=max>temp.size()?max:temp.size();
         temp.clear();
        }
        return max;
    }