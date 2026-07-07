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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> nums;
        ListNode* temp1 = list1;
        while(temp1){
            nums.push_back(temp1->val);
            temp1 = temp1->next;
        }
        ListNode* temp2 = list2;
        while(temp2){
            nums.push_back(temp2->val);
            temp2 = temp2->next;
        }
        sort(nums.begin(), nums.end());

        ListNode* res = nullptr;
        for (int n : nums){
            insertNode(res, n);
        }
        return res;
    }
    void insertNode(ListNode* &head, int value){
        ListNode* temp = head;
        ListNode* dummy = new ListNode(value);
        if (head == nullptr) {
            head = dummy;
            return;
        }
        while(temp->next) {
            temp = temp->next;
        }
        temp->next = dummy;
    }
};
