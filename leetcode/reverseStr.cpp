
/*
Given a string and an integer k, you need to reverse the first k characters for every 2k characters counting from the start of the string. If there are less than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and left the other as original.
Example:
Input: s = "abcdefg", k = 2
Output: "bacdfeg"
*/

class Solution {
public:
    string reverseStr(string s, int k) 
    {
        int i=0;
        if(s.size()<=k)
            reverse(s.begin(),s.end());
        else
        {
            while(2*(i+1)*k <= s.size())
            {
                reverse((s.begin()+i*k*2),(s.begin()+i*k*2+k));
                i++;
            }
            if(s.size()-2*i*k<=k)
                reverse((s.begin()+i*k*2),s.end());
            else
                reverse((s.begin()+i*k*2),(s.begin()+i*k*2+k));
        }
        return s;
    }
};