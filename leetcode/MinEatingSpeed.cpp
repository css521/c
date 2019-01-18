
/*
Koko loves to eat bananas.  There are N piles of bananas, the i-th pile has piles[i] bananas.  The guards have gone and will come back in H hours.

Koko can decide her bananas-per-hour eating speed of K.  Each hour, she chooses some pile of bananas, and eats K bananas from that pile.  If the pile has less than K bananas, she eats all of them instead, and won't eat any more bananas during this hour.

Koko likes to eat slowly, but still wants to finish eating all the bananas before the guards come back.

Return the minimum integer K such that she can eat all the bananas within H hours.

 

Example 1:

Input: piles = [3,6,7,11], H = 8
Output: 4
Example 2:

Input: piles = [30,11,23,4,20], H = 5
Output: 30
Example 3:

Input: piles = [30,11,23,4,20], H = 6
Output: 23
*/

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) 
    {
        long long sum=0,temp=0;
        float i=0;
        for(auto it:piles)sum+=it;
        i=sum/H;
      while(++i)
      {
            temp=0;
            for(int j=0;j<piles.size();++j)  
                temp+=ceil(piles[j]/i);// Ceil is a upward rounding function. Ceil(1.2)=2,Ceil(-1.2)=1 
                 if(temp<=H)
                break;          
        }     
        return i;
    }
};