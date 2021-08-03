/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    ListNode * prev = A;
    ListNode * curr = prev->next;
    while(curr){
        if(curr->val!=prev->val ){
            prev->next=curr;
            prev = prev->next;
            curr = curr->next;               
        }    
        else {
            curr = curr->next;
        }
    }
    prev->next = NULL;
    return A;
}
