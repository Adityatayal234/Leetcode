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
    void reorderList(ListNode* head) {
        
        if(head == NULL)
            return;
        
        // Find middle of LL
        ListNode *fast=head , *slow = head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Reverse the LL
        ListNode *pre=NULL,*curr=slow,*next;
        
        while(curr!=NULL){
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        
        // Merge two LL
        ListNode *first = head , *second = pre;
        
        while(second->next != NULL){
            ListNode *temp = first->next;
            first->next = second;
            first = temp;
            
            temp = second->next;
            second->next = first;
            second = temp;
        }
        
    }
};