
/*
Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:
    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
    ...
Example 1:
Input: "A"
Output: 1
Example 2:

Input: "AB"
Output: 28
Example 3:

Input: "ZY"
Output: 701
*/

   int TitleToNumber(string s) 
    {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            sum+=(s[s.size()-1-i]-64)*pow(26,i);        //AA=(A*26^1+A*26^0) ZXYY=(Z*26^3+X*26^2+Y*26^1+Y*26^0)
        }
        return sum;
    }
