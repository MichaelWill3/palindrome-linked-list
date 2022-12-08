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
#include <iostream>

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next == nullptr) return true;
        ListNode* currentNode = head;
        std::vector<int> list;
        list.push_back(currentNode->val);
        while(currentNode->next != nullptr){
            currentNode = currentNode->next;
            list.push_back(currentNode->val);
        }

        for(int i = 0; i < list.size()/2; i++)
        {
            if(list[i]!=list[list.size()-1-i]) return false;
        }
        return true;
    }
};
