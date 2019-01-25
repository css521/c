
/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
*/

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty())return true;
        for(char& i:s)
        {
            i=isalnum(i)?i:' ';
            i=tolower(i);
        }
        stringstream iss(s);
        string temp;
        string str;
        while(iss>>temp)str+=temp;      
        string str1=str;
        reverse(str.begin(),str.end());
        return str1==str;
    }
};