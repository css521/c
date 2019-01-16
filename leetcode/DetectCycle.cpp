
/*
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.

Note: Do not modify the linked list.

 

Example 1:

Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.


Example 2:

Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.


Example 3:

Input: head = [1], pos = -1
Output: no cycle
Explanation: There is no cycle in the linked list.

https://leetcode-cn.com/problems/linked-list-cycle-ii/
*/

class Solution {
public:
    ListNode *detectCycle(ListNode *head)
    {
        if (!head) {
            return NULL;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) {
                ListNode* slow2 = head;
                
                while (slow != slow2) {
                    slow = slow->next;
                    slow2 = slow2->next;
                }
                
                return slow;
            }
        }
        
        return NULL;
    }
};