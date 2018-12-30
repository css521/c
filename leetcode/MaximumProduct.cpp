
/*
Given an integer array, find three numbers whose product is maximum and output the maximum product.

Example 1:
Input: [1,2,3]
Output: 6

Example 2:
Input: [1,2,3,4]
Output: 24

*/

    int maximumProduct(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int a=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int b=nums[0]*nums[1]*nums[nums.size()-1];    
		//Don't forget there are negative numbers.  example [-5,1,2,3] [-2,-1,3,5] [-5,-3,-1,2] 
		//They each have one, two, three negative numbers. Max=[1*2*3],[-2*-1*5],[-5*-3*2]
        return a>b?a:b; 
    }