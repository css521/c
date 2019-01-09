
/*
We are playing the Guess Game. The game is as follows:

I pick a number from 1 to n. You have to guess which number I picked.

Every time you guess wrong, I'll tell you whether the number is higher or lower.

You call a pre-defined API guess(int num) which returns 3 possible results (-1, 1, or 0):

-1 : My number is lower
 1 : My number is higher
 0 : Congrats! You got it!
 */
 int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int min=1,max=n;
        if(guess(n)==0)return n;
        while(min<=max)
        {
        int mid=min+(max-min)/2;
        if(guess(mid)==1) min=mid+1;
        else if(guess(mid)==-1) max=mid;
        else return mid;
        }
        return 1;
    }
};