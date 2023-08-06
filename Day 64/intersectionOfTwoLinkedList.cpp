// Leetcode 160. Intersection of Two Linked Lists

// Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

#include<iostream>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *d1 = headA;
        ListNode *d2 = headB;
        while(d1!=d2){   // while until both a not equal    
            if(d1 == NULL){    
                d1 = headA;
            }
            else{
                d1 = d1 -> next;
            }
            if(d2 == NULL){    
                d2 = headB;
            }
            else{
                d2 = d2 -> next;
            } 
        }
        return d1;
    }
};