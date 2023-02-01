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
    ListNode* middleNode(ListNode* head) {
    int length=0;
     ListNode *current=head;
     ListNode *temp=head;
     while(current){
         length++;
         current=current->next;
     }
    for(int i=0;i<length/2;i++){
            temp=temp->next;
    }
     return temp;
    }
};