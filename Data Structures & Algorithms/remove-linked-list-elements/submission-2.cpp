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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ans = nullptr;
        ListNode* cur = head;
        vector<int> nums;

        while(cur != nullptr){
            if(cur->val != val){
                nums.push_back(cur->val);
            }
            cur = cur->next;
        }
        for (int x : nums){
            insertBack(ans, x);
        }
        return ans;
    }

    void insertBack(ListNode* &ans, int data){
        ListNode* newNode = new ListNode(data);
        if (ans == nullptr){
            ans = newNode;
            return;
        }
        ListNode* cur = ans;
        while(cur->next != nullptr){
            cur = cur->next;
        }
        cur->next = newNode;
    }
};