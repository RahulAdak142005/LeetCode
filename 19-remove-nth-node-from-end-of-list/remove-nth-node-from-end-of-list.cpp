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
        ListNode* fast=head;
        ListNode* slow=head;
        if(head->next==NULL && n==1){
            head=head->next;
            return head;
        }
        int count=1;
        while(n!=0){
            fast=fast->next;
            n--;
            count++;
        }
        if(fast==NULL){
            head=head->next;
            return head;
        }
        while(fast->next !=NULL){
            fast=fast->next;
            slow=slow->next;
            count++;
        }
        ListNode* list1=slow->next;
        slow->next=slow->next->next;
        delete(list1);
        return head;
    }
};