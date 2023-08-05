// Leetcode 148. Sort List

// Given the head of a linked list, return the list after sorting it in ascending order.

// Definition for singly-linked list.
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head ->next == NULL)
            return head;
        
        //middle of linked list
        ListNode *temp = NULL;
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast !=  NULL && fast -> next != NULL){
            temp = slow;
            slow = slow->next;          
            fast = fast ->next ->next;  
            
        }   
        temp -> next = NULL;            
        
        ListNode* l1 = sortList(head);  //2   
        ListNode* l2 = sortList(slow);  //1 
        
        return mergeTwoLists(l1, l2);         

    }
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        
        if(left == NULL)  return right;
        if(right == NULL) return left;

        ListNode *ans = new ListNode(-1); 
        ListNode *mptr = ans;
        
    while(left!=NULL && right!=NULL){
            if(left->val<=right->val){
                mptr->next = left;
                mptr = left;
                left = left->next;
            }
            else{
                mptr->next = right;
                mptr = right;
                right = right->next;
            }
        }
    
    if(left!=NULL){
        mptr->next=left;
    }
    if(right!=NULL){
        mptr->next=right;
    }
    
    return ans->next;
    }
};