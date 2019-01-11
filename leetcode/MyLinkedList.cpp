
/*
Design your implementation of the linked list. You can choose to use the singly linked list or the doubly linked list. A node in a singly linked list should have two attributes: val and next. val is the value of the current node, and next is a pointer/reference to the next node. If you want to use the doubly linked list, you will need one more attribute prev to indicate the previous node in the linked list. Assume all nodes in the linked list are 0-indexed.

Implement these functions in your linked list class:

get(index) : Get the value of the index-th node in the linked list. If the index is invalid, return -1.
addAtHead(val) : Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
addAtTail(val) : Append a node of value val to the last element of the linked list.
addAtIndex(index, val) : Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted.
deleteAtIndex(index) : Delete the index-th node in the linked list, if the index is valid.
Example:

MyLinkedList linkedList = new MyLinkedList();
linkedList.addAtHead(1);
linkedList.addAtTail(3);
linkedList.addAtIndex(1, 2);  // linked list becomes 1->2->3
linkedList.get(1);            // returns 2
linkedList.deleteAtIndex(1);  // now the linked list is 1->3
linkedList.get(1);            // returns 3
*/

struct MyListNode {
    int val;
    struct MyListNode* next;
} ;
class MyLinkedList {
public:
    MyListNode *head = (MyListNode *) malloc(sizeof(MyListNode));

    /** Initialize your data structure here. */
    MyLinkedList() {
        head = NULL;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if (index < 0)
            return -1;
        MyListNode *temp = head;
        while (temp) {
            if (index == 0)
                return temp->val;
            temp = temp->next;
            index--;
        }
        return -1;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        MyListNode* newHead = new MyListNode;
        newHead -> val = val;
        newHead -> next = head;
        head = newHead;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        MyListNode* newTail = new MyListNode;
        newTail -> val = val;
        newTail -> next = NULL;
        if (head == NULL) {
            head = newTail;
            return;
        }
        MyListNode* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newTail;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index < 0)
            return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (head == NULL)
            return;
        MyListNode* temp = head;
        while (temp) {
            if (index == 1) {
                MyListNode* newNode = new MyListNode;
                newNode->next = temp->next;
                newNode->val = val;
                temp->next = newNode;
                return;
            }
            index--;
            temp = temp->next;
        }
        return;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (head == NULL || index<0) {
            return;
        }
        MyListNode* temp = head;
        if (index == 0) {
            temp = head->next;
            delete(head);
            head = temp;
            return;
        }
        temp = head->next;
        MyListNode* prev = head;
        while (temp) {
            if (index == 1) {
                prev->next = temp->next;
                delete(temp);
                return;
            }
            index--;
            prev = temp;
            temp = temp->next;
        }
        return;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */