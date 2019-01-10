
/*
Given a sorted array, two integers k and x, find the k closest elements to x in the array. The result should also be sorted in ascending order. If there is a tie, the smaller elements are always preferred.

Example 1:
Input: [1,2,3,4,5], k=4, x=3
Output: [1,2,3,4]
Example 2:
Input: [1,2,3,4,5], k=4, x=-1
Output: [1,2,3,4]
*/


class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        vector<int>res;
        for(int i=0;i<arr.size();i++)
        {
            if(res.size()<k)
                res.push_back(arr[i]);
            else
            {
                int currt=abs(arr[i]-x);
                if(abs(res[0]-x)>currt)
                {
                    res.erase(res.begin());
                    res.push_back(arr[i]);
                }
            }
            
        }
        return res;
    }
};