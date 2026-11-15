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
        ListNode* dummy=new ListNode(0);
        dummy->next=head;

        ListNode* prev=dummy;
        ListNode* curr=dummy;

        for(int i=0;i<=n;i++){
            curr=curr->next;
        }
        while(curr!=NULL){
            prev=prev->next;
            curr=curr->next;
        }
        
        ListNode* temp=prev->next;
        prev->next=temp->next;
        delete temp;

        return dummy->next;

    }   
};