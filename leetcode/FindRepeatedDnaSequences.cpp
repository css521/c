
/*
All DNA is composed of a series of nucleotides abbreviated as A, C, G, and T, for example: "ACGAATTCCG". When studying DNA, it is sometimes useful to identify repeated sequences within the DNA.

Write a function to find all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.

Example:

Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"

Output: ["AAAAACCCCC", "CCCCCAAAAA"]
*/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>res;
        map<string,int>hash;
        map<string,int>::iterator iter;
        if(s.size()<10)
        return res;

        
        for(int i=0;i<=s.size()-10;i++)
        {
            string str = s.substr(i,10);
            hash[str]++;
        }
        for(iter=hash.begin();iter!=hash.end();iter++)
        {
            if(iter->second >1)
                res.push_back(iter->first);
        }
        
        return res;
    }
};