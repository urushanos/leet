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

        if(head==NULL || head->next == NULL)
            return NULL;
            
        ListNode* curr = head;
        int count=0;

        while(curr){
            count++;
            curr = curr->next;
        } 

        curr= head;

        for(int i=0; i<count/2-1; i++){
            curr = curr->next;
        }
        ListNode *temp = curr->next;
        //curr->next = curr->next->next;
        curr->next = temp->next;
        delete temp;

        return head;


    }
};