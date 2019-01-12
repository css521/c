
/*
Given two arrays A and B of equal size, the advantage of A with respect to B is the number of indices i for which A[i] > B[i].

Return any permutation of A that maximizes its advantage with respect to B.

 

Example 1:

Input: A = [2,7,11,15], B = [1,10,4,11]
Output: [2,11,7,15]
Example 2:

Input: A = [12,24,8,32], B = [13,25,32,11]
Output: [24,32,8,12]
*/

class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) 
    {
        vector<int>res(A.size());
        vector<pair<int,int>>hash;
        for(int i=0;i<B.size();i++)
        {
            hash.push_back(pair<int, int>(B[i],i));
        }
        sort(A.begin(),A.end());
        for(int i=0;i<A.size();i++)
        {
            auto min= min_element(hash.begin(), hash.end());
            auto max = max_element(hash.begin(), hash.end());
            if(A[i]>min->first)
            {                
                res[min->second]=A[i];
                 hash.erase(min);
            }
            else
            {
                res[max->second]=A[i];
                hash.erase(max);
            }
           
        }
        return res;
        
    }
};