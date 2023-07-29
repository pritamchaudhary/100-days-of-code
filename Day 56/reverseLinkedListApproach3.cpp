// Leetcode 206. Reverse Linked List

// Given the head of a singly linked list, reverse the list, and return the reversed list.

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
    ListNode* reverse(ListNode* head){
        // base case
        if(head == NULL || head -> next == NULL){
            return head;
        }

        ListNode* smallHead = reverse(head -> next);
        head -> next -> next = head;
        head -> next = NULL;
        return smallHead;
    }
public:
    ListNode* reverseList(ListNode* head) {
        return reverse(head);
    }
};