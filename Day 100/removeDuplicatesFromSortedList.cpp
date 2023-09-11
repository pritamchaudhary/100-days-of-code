// Leetcode 83. Remove Duplicates from Sorted List

// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *ans = head;
        while (ans && ans->next)
        {
            if (ans->val == ans->next->val)
                ans->next = ans->next->next;
            else
                ans = ans->next;
        }
        return head;
    }
};