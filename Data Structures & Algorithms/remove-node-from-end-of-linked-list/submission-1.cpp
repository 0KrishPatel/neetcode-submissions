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
        int c = 0;
        ListNode* cur = head; // O(n) and space is 1
        while(cur){
            c++;
            cur = cur->next;
        }
        cur = head;

        if(c == n){
            ListNode* temp = head;
            head = head->next;
            delete(temp);
            return head;
        }
        for(int i = 0; i < c-n-1;i++){
            cur = cur->next;
        }
        ListNode* temp = cur->next;
        cur->next = cur->next->next;
        //head = cur;
        delete(temp);
        return head;


    }
};
