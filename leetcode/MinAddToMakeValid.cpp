
/*
Given a string S of '(' and ')' parentheses, we add the minimum number of parentheses ( '(' or ')', and in any positions ) so that the resulting parentheses string is valid.
Formally, a parentheses string is valid if and only if:
It is the empty string, or
It can be written as AB (A concatenated with B), where A and B are valid strings, or
It can be written as (A), where A is a valid string.
Given a parentheses string, return the minimum number of parentheses we must add to make the resulting string valid.

Example 1:
Input: "())"
Output: 1

Example 2:
Input: "((("
Output: 3

Example 3:
Input: "()"
Output: 0

Example 4:
Input: "()))(("
Output: 4
*/
 int minAddToMakeValid(string S)  //it also can used stack<chat>vec;
 {
    vector<char>temp;
    for(auto it:S){
        if(it=='(')
			temp.push_back(it);
        if(it==')')
            if(!temp.empty()) 
                if(temp[temp.size()-1]=='(') //If the last one is ( then pop it.then ( and ) can be together
                    temp.pop_back();   
                else
                    temp.push_back(it);
            else
                temp.push_back(it);   //If it's empty, push it.
        
        }
    return temp.size();
}