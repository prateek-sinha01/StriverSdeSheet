// Problem link : https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?topList=striver-sde-sheet-problems&leftPanelTab=0

Node *findMiddle(Node *head) 
{
    Node *fast=head, *slow = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// Time Complexity : O(n)
// Space Complexity : O(1)
