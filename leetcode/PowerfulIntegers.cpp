
/*
Given two non-negative integers x and y, an integer is powerful if it is equal to x^i + y^j for some integers i >= 0 and j >= 0.

Return a list of all powerful integers that have value less than or equal to bound.

You may return the answer in any order.  In your answer, each value should occur at most once.


Example 1:
Input: x = 2, y = 3, bound = 10
Output: [2,3,4,5,7,9,10]
Explanation: 
2 = 2^0 + 3^0
3 = 2^1 + 3^0
4 = 2^0 + 3^1
5 = 2^1 + 3^1
7 = 2^2 + 3^1
9 = 2^3 + 3^0
10 = 2^0 + 3^2

Example 2:
Input: x = 3, y = 5, bound = 15
Output: [2,4,6,8,10,14]
*/

class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) 
    {
        
        set<int>vec;
        set<int>::iterator iter;
        vector<int>res;
        int n,m;
        if(x==1) n==1;
        else
			n=log10(bound)/log10(x)+1;
        if(y==1) m=1;
        else
            m=log10(bound)/log10(y)+1;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(pow(x,i)+pow(y,j)<=bound)
                    vec.insert(pow(x,i)+pow(y,j));
        for(iter = vec.begin() ; iter != vec.end() ; ++iter)  
        {  
        res.push_back(*iter);  
        }  
        return res;
    }
};