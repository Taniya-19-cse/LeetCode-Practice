/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* findKth(ListNode* temp, int k)
{
    while(temp != NULL && --k)
    {
        temp = temp->next;
    }
    return temp;
}
  ListNode* reverse(ListNode* head)
{
    ListNode* prev = NULL;
    ListNode* curr = head;

    while(curr)
    {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
   ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* temp = head;
    ListNode* prevNode = NULL;

    while (temp != NULL) {

        ListNode* kthNode = findKth(temp, k);
        if (kthNode == NULL) {
            if (prevNode)
                prevNode->next = temp;
            break;
        }
        ListNode* nextNode = kthNode->next;
        kthNode->next = NULL;
        reverse(temp);
        if (temp == head) {
            head = kthNode;
        } else {
            prevNode->next = kthNode;
        }
        prevNode = temp;
        temp = nextNode;
    }
    return head;
}
};