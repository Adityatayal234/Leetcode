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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        ListNode* head,*temp=NULL;
        //p1=l1;
        //ListNode* p2=l2;
        int r=0,c=0,v;
        while(l1 || l2){
            v=c+((l1?l1->val:0)+(l2?l2->val:0));
            r=v%10;
            c=v/10;
            if(temp==NULL){
                temp=new ListNode(r) ;
                head=temp;
                //temp=temp->next;
            }
            else{
                temp->next=new ListNode(r);
                temp=temp->next;
                
            }
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        if(c>0){
            temp->next=new ListNode(c);
            temp=temp->next;
        }
            
        
        return head;
    }
};