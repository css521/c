
/*
Given a function rand7 which generates a uniform random integer in the range 1 to 7, write a function rand10 which generates a uniform random integer in the range 1 to 10.

Do NOT use system's Math.random().

 

Example 1:

Input: 1
Output: [7]
Example 2:

Input: 2
Output: [8,4]
Example 3:

Input: 3
Output: [8,1,10]
*/

class Solution {
public:
    int rand10() {
		int num;
        while((num = 7*(rand7()-1) + rand7()-1)>=40);
        return num%10+1;
    }
};