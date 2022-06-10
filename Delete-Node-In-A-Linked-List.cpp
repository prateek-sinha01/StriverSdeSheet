// Problem link : https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/

class Solution {
public:
    void deleteNode(ListNode* node) 
    {
        ListNode *ptr = node->next;
        node->val = ptr->val;
        node->next = ptr->next;
        delete ptr;
    }
};

// Time Complexity : O(1)
// Space Complexity : O(1)
