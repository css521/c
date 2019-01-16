
/*

Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
*/

class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string res="";
        stringstream iss(s);
        while(iss>>temp)
        {
            reverse(temp.begin(),temp.end());
            res=res+temp+" ";
        }
        res.resize(s.size());
        return res;
    }
};