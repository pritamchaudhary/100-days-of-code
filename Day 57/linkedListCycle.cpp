// Leetcode 141. Linked List Cycle

// Given head, the head of a linked list, determine if the linked list has a cycle in it.

// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

// Return true if there is a cycle in the linked list. Otherwise, return false.

#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
private:
    //utility function to insert node in the list
void insertNode(ListNode* &head,int val) {
    ListNode* newNode = new ListNode(val);
    
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    ListNode* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}

//utility function to create cycle
void createCycle(ListNode* &head,int a,int b) {
    int cnta = 0,cntb = 0;
    ListNode* p1 = head;
    ListNode* p2 = head;
    while(cnta != a || cntb != b) {
        if(cnta != a) p1 = p1->next, ++cnta;
        if(cntb != b) p2 = p2->next, ++cntb;
    }
    p2->next = p1;
}
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        ListNode* fast = head;
        ListNode* slow = head;
            
        while(fast->next != NULL && fast->next->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) return true;
        }
        return false;
    }
};