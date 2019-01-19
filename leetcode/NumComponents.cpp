
/*
We are given head, the head node of a linked list containing unique integer values.

We are also given the list G, a subset of the values in the linked list.

Return the number of connected components in G, where two values are connected if they appear consecutively in the linked list.

Example 1:

Input: 
head: 0->1->2->3
G = [0, 1, 3]
Output: 2
Explanation: 
0 and 1 are connected, so [0, 1] and [3] are the two connected components.
Example 2:

Input: 
head: 0->1->2->3->4
G = [0, 3, 1, 4]
Output: 2
Explanation: 
0 and 1 are connected, 3 and 4 are connected, so [0, 1] and [3, 4] are the two connected components.
*/

class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) 
    {
        set<int> set(G.begin(), G.end());
        int result = 0;
        while (head) 
        {
            if (set.find(head->val) != set.end()) 
                if (!head->next || set.find(head->next->val) == set.end()) 
                    result ++;
            head = head->next;
        }
        return result;
    }
};