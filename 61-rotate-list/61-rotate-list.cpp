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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* p;
        int n=1;
        p=head;
    
        if(head==NULL || k==0)
            return head;
        
        while(p->next!=NULL && p!=NULL){
            n++;
            p=p->next;
        }
      //  cout<<p->val<<"\n";
        k=k%n;
        if(k==0)
            return head;
        
        
        k=n-k;
        //cout<<k<<"\n";
        ListNode* q=head,*r=NULL;
        while(k--){
            r=q;
            q=q->next;   
        }
        p->next=head;
        r->next=NULL;
        head=q;
        return head;
    }
};