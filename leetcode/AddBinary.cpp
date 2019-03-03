
/*
Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
*/

class Solution {
public:
    string addBinary(string a, string b) 
    {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        if(a.size()>b.size())
        {
            string temp(a.size()-b.size(),'0');
            b=b+temp;
            
        }
        else
        {
            string temp(b.size()-a.size(),'0');
            a=a+temp;
        }
        string res{};
        int temp=0;
        for(int i=0;i<a.size();i++)
        {
            if((a[i]-'0'+b[i]-'0'+temp)>=2)
            {
                res+=(a[i]-'0'+b[i]+temp)-2;
                temp=1;
            }
            else
            {
                char x=a[i]-'0'+b[i]+temp;
                temp=0;
                res+=x;
            }
                
        }
        if(temp==1)res+='1';
        reverse(res.begin(),res.end());
        return res;
    }
};