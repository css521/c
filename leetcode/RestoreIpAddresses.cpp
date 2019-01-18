
/*
Given a string containing only digits, restore it by returning all possible valid IP address combinations.

Example:

Input: "25525511135"
Output: ["255.255.11.135", "255.255.111.35"]
*/

class Solution {
public:
    vector<string> restoreIpAddresses(string s) 
    {
        vector<string>res;
        for(int i=1;i<4&&i<s.size()-2;i++)
            for(int j=i+1;j<i+4&&j<s.size()-1;j++)
                for(int k=j+1;k<j+4&&k<s.size();k++)
                {
                    if(s.size()-k>=4)continue;
                    int a=stoi(s.substr(0,i)); //int a=atoi(s.substr(0,i).c_str());
                    int b=stoi(s.substr(i,j-i));
                    int c=stoi(s.substr(j,k-j));
                    int d=stoi(s.substr(k));
                    if(a>255||b>255||c>255||d>255)continue;
                    string ip=to_string(e)+'.'+to_string(b)+'.'+to_string(c)+'.'+to_string(d);
                    if(ip.size()<s.size()+3)continue;
                    res.push_back(ip);
                }
        return res;
    }  
};