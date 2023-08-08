// Leetcode 25. Reverse Nodes in k-Group

// Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

// You may not alter the values in the list's nodes, only nodes themselves may be changed.

#include<iostream>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
private:
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
//utility function to find length of the list
int lengthOfLinkedList(ListNode* head) {
    int length = 0;
    while(head != NULL) {
        ++length;
        head = head->next;
    }
    return length;
}
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL||head->next == NULL) return head;
    
        int length = lengthOfLinkedList(head);
        
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        
        ListNode* pre = dummyHead;
        ListNode* cur;
        ListNode* nex;
        
        while(length >= k) {
            cur = pre->next;
            nex = cur->next;
            for(int i=1;i<k;i++) {
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            pre = cur;
            length -= k;
        }
        return dummyHead->next;
    }
};