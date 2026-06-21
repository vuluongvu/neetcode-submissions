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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while (temp != nullptr){
            ListNode* nodeNext = temp->next; // 1 va dia chi cua 2
            temp->next = prev; // dia chi cua 2 -> 1 
            prev = temp; // cap nhat node de gan vd: 1  
            
            temp = nodeNext; // luu bien tap vi minh se gan temp -> next
        }
        return prev;
    }
};
