
/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string res;
        if(strs.empty())return res;
        if(strs.size()==1)return strs[0];
        string s=strs[0];
        for(int j=0;j<strs[0].size();j++)
        {
            char ch=strs[0][j];
            for(int i=0;i<strs.size();i++)
            {
                if(strs[i][j]!=strs[0][j])
                    return res;
            }
            res=res+ch;
        }
        return res;
    }
};