
/*
Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

Example 1:
Input: "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()"

Example 2:
Input: ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()"

*/

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>ss;  
        int max=0;
        int t;
        for(int i= 0;i<s.size();i++)
        {
            if(s[i]==')'&&!ss.empty()&&s[ss.top()]=='(')
            {
                ss.pop();
                if(ss.empty())
                    max=i+1;
                else
                    if(i-ss.top()>max)
                        max=i-ss.top();
            }
            else
                ss.push(i);
        }
        return max;
    }
};