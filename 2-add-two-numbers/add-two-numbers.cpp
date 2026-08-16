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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { //hello
     int carry=0, sum=0;
     ListNode* t1=l1; ListNode* t2=l2;
     ListNode* dummy=new ListNode(-1);
     ListNode* temp=dummy;
     while(t1||t2||carry){
        if(t1 && t2)sum=carry + t1->val + t2->val;
        else if(t1) sum=carry+t1->val;
        else if(t2)sum=carry + t2->val;
        else sum=carry;
        ListNode* ans=new ListNode(sum%10);
        temp->next=ans;
        carry=sum/10;
        if(t1) t1=t1->next;
        if(t2) t2=t2->next;
        temp=temp->next;

     }
       return dummy->next; 
    }
};