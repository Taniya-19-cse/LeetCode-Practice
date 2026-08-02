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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        // if(head==NULL || head->next==NULL)
        // return head;
      
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
          if(n==1 && cnt==1)
        {
            delete(head);
            return NULL;
        }
        if(cnt==n)
        {
            ListNode* newHead=head->next;
            delete(head);
            return newHead;
        }
        int m=(cnt-n);
        ListNode*curr=head;
        while(curr!=NULL)
        {
            m--;
            if(m==0) break;
            curr=curr->next;
        }
        ListNode* delNode=curr->next;
        
    curr->next=curr->next->next;
    
    delete(delNode);
        return head;
    }
};