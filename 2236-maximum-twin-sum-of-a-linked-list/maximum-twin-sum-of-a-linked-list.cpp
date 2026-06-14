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
    int pairSum(ListNode* head) {
        vector<int> arr;
        while(head){
            arr.push_back(head->val);
            head= head->next;
        }

        int i=0, j=arr.size()-1, maxnum=0;

        while(i<j){
            maxnum = max(arr[i]+arr[j] , maxnum);
            i++;
            j--;
        }

        return maxnum;

    }
};