
/*
Given a pattern and a string str, find if str follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.

Example 1:

Input: pattern = "abba", str = "dog cat cat dog"
Output: true
Example 2:

Input:pattern = "abba", str = "dog cat cat fish"
Output: false
Example 3:

Input: pattern = "aaaa", str = "dog cat cat dog"
Output: false
Example 4:

Input: pattern = "abba", str = "dog dog dog dog"
Output: false
*/

class Solution {
public:
    bool wordPattern(string pattern, string str) 
    {
        unordered_map<string,char>hash;
        unordered_map<char,string>hash1;
        string s;
        stringstream iss(str);
        int i=0;
        while(iss>>s)
        {
            if(hash.find(s)==hash.end()&&hash1.find(pattern[i])==hash1.end())
            {
                hash[s]=pattern[i];
                hash1[pattern[i]]=s;
            }
            else
            {
                if(hash[s]!=pattern[i]||hash1[pattern[i]]!=s)
                    return false;
            }
            i++;
        }
        if(i!=pattern.size())
            return false;
        return true;
    }
};