
/*
Given two strings s and t , write a function to determine if t is an anagram of s.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
*/

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
       if(s.size()!=t.size())return false;
       vector<int>vec(26,0);
        for(int i=0;i<s.size();i++)
        {
            vec[s[i]-'a']++;
            vec[t[i]-'a']--;
        }
        for(auto it:vec)
            if(it!=0)
                return false;
        return true;
    }
};

