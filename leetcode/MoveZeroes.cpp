/*
Given an array nums, 
write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Example:
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
 void moveZeroes(vector<int>& nums) {
    int CountNumberZero=0;//
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){//
                CountNumberZero++;
        else if(CountNumberZero!=0){
                nums[i-CountNumberZero]=nums[i];  
                nums[i]=0;
            }
      }
	}
 }



