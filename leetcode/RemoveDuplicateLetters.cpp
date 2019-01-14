/*
Given a string which contains only lowercase letters, remove duplicate letters so that every letter appear once and only once. You must make sure your result is the smallest in lexicographical order among all possible results.

Example 1:

Input: "bcabc"
Output: "abc"
Example 2:

Input: "cbacdcbc"
Output: "acdb"
*/

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> vec(256,0);
        vector<bool> visited(256,0);
        for(char c : s)vec[c]++;
        string res = "";
        for(char c : s){
            vec[c]--;//每次遍历一个字符就将他出现的次数减一
            if(visited[c])continue;
            //如果结果字符串尾端的字符比将要插入字符大，而且后面字符串中还有这个字符，就弹出。
            while(vec[res.back()] && c < res.back()){
                visited[res.back()] = false;
                res.pop_back();
            }
            res += c;
            visited[c] = true;
        }
        return res;
    }
};