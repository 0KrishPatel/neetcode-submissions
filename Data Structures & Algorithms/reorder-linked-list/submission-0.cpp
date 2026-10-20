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
    void reorderList(ListNode* head) { // O(n) time and space 
        // create arr 
        vector<int> arr;
        int i = 0;
        ListNode* cur = head;
        while(cur){
            arr.push_back(cur->val);
            cur = cur->next;
            i++;
        }
        cur = head;
        int l = 0;
        int r = arr.size()-1;
        int n = arr.size();
        ListNode* temp = head;
        //temp = head->next;
        for(int i = 0; i < n ; i++){
            if(i % 2 == 0){
                temp->val = arr[l];
                //temp->
                l++;

            }else{
                temp->val = arr[r];
                r--;

            }
            temp = temp->next;
        }
        head = temp;

        
    }
};
