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
    ListNode* deleteMiddle(ListNode* head) {
    int cnt=0;
    ListNode*temp=head;
    if(head==NULL || head->next==NULL)
    {
        return NULL;
    }
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    int m=cnt/2;
    // if(m==1)
    // {
    //     ListNode * newNode=head;
    //     head->next=NULL;
    //     return head;
    // }
    ListNode* node=head;
    for(int i=1;i<=m-1;i++)
    {
        node=node->next;
    }
    ListNode* mid=node->next;
    node->next=mid->next;
    return head;
    }
};