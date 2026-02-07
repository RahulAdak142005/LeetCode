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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            ListNode* list1=lists[i];
            while(list1!=NULL){
                v.push_back(list1->val);
                list1=list1->next;
            }
        }
        sort(v.begin(),v.end());
        int x=v.size();
        ListNode* list2=new ListNode(0);
        ListNode* list3=list2;
        for(int i=0;i<x;i++){
            list3->next=new ListNode(v[i]);
            list3=list3->next;
        }
        return list2->next;
    }
};