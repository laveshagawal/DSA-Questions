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
        ListNode* temp = head;
        // int count=0;
        // while(temp!=nullptr){
        //     temp=temp->next;
        //     count++;
        // }
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        if (n == 1) {
            ListNode*temp= prev;
            prev = prev->next;
            delete temp;

        } else {
            ListNode* temp = prev;
            for (int i = 1; i < n-1; i++) {
                temp = temp->next;
            }
            ListNode* deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
        }
        ListNode* newprev = NULL;
        ListNode* newcurr = prev;
        while (newcurr != NULL) {
            ListNode* newnext = newcurr->next;
            newcurr->next = newprev;
            newprev = newcurr;
            newcurr = newnext;
        }

        return newprev;
    }
};