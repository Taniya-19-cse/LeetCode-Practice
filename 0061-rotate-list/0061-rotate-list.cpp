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
    ListNode* findKthNode(ListNode* head ,int k){
            int cnt=0;
            ListNode* temp=head;
            if(temp==NULL || temp->next == NULL){
                return temp;
            }
            while(temp!=NULL){
                cnt++;
                if(cnt==k) return temp;
                temp=temp->next;
            }
            return NULL;
        }
    ListNode* rotateRight(ListNode* head, int k) {
          if(head==NULL || head->next==NULL){
                return head;
            }
          int len=1;
          ListNode * tail=head;
          while(tail->next!=NULL)
          {
            len++;
            tail=tail->next;
          }
          if(k%len == 0) return head;
          k=k%len;
          tail->next=head;
          ListNode * newLastNode=findKthNode(head,len-k);
          head=newLastNode->next;
          newLastNode->next=NULL;
          return head;
    }
};