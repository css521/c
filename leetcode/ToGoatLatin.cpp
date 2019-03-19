
/*

A sentence S is given, composed of words separated by spaces. Each word consists of lowercase and uppercase letters only.

We would like to convert the sentence to "Goat Latin" (a made-up language similar to Pig Latin.)

The rules of Goat Latin are as follows:

If a word begins with a vowel (a, e, i, o, or u), append "ma" to the end of the word.
For example, the word 'apple' becomes 'applema'.
 
If a word begins with a consonant (i.e. not a vowel), remove the first letter and append it to the end, then add "ma".
For example, the word "goat" becomes "oatgma".
 
Add one letter 'a' to the end of each word per its word index in the sentence, starting with 1.
For example, the first word gets "a" added to the end, the second word gets "aa" added to the end and so on.
Return the final sentence representing the conversion from S to Goat Latin. 

 

Example 1:

Input: "I speak Goat Latin"
Output: "Imaa peaksmaaa oatGmaaaa atinLmaaaaa"
Example 2:

Input: "The quick brown fox jumped over the lazy dog"
Output: "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa"
*/

class Solution {
public:
    string toGoatLatin(string S) 
    {
        stringstream iss(S);
        string temp;
        string ans{};
        int k=1;
        while(iss>>temp)
        {
            string s(k++,'a');
            if(temp[0]=='a'||temp[0]=='e'||temp[0]=='i'||temp[0]=='o'||temp[0]=='u'||temp[0]=='A'||temp[0]=='E'||temp[0]=='I'||temp[0]=='O'||temp[0]=='U')
            {
             temp=temp;
            }
            else
            {
                string temp1=temp.substr(1,temp.size()-1);
                temp=temp1+temp[0];
            }
            ans+=temp+"ma"+s+" ";
        }
        ans.erase(ans.size()-1,1);
        return ans;
        
    }
};