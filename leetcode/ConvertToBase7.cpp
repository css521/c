
/*

Given an integer, return its base 7 string representation.

Example 1:
Input: 100
Output: "202"
Example 2:
Input: -7
Output: "-10"
*/

class Solution {
public:
    string convertToBase7(int num) 
    {
       vector<int>vec;
       int res=0;
       while(num)
		{
			vec.push_back(num%7); // Base n->num%n
			num/=7;  //num/=n;
		}
        for(int i=vec.size()-1;i>=0;i--)
            res=res*10+vec[i];
       return to_string(res);
    }
};