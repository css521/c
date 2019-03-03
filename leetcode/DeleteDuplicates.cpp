
/*
Given a sorted linked list, delete all duplicates such that each element appear only once.

Example 1:

Input: 1->1->2
Output: 1->2
Example 2:

Input: 1->1->2->3->3
Output: 1->2->3
*/

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        

        if(head==nullptr)return head;
        ListNode *temp=head;
        while(temp->next&&temp)
        {
            if(temp->val==temp->next->val)
                temp->next=temp->next->next;
            else
                temp=temp->next;
        }
        return head;
        
    }
};
