// Problem link : https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_799897?topList=striver-sde-sheet-problems&leftPanelTab=0

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *ptr = head, *cur = NULL;
    while(ptr!=NULL)
    {
        LinkedListNode<int> *nxt = ptr->next;
        ptr->next = cur;
        cur = ptr;
        ptr = nxt;
    }
    return cur;
}

// Time Complexity : O(n)
// Space Complexity : O(1)
