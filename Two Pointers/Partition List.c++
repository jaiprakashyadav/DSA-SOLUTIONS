/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int x) {
    struct ListNode *prev=A;
    struct ListNode *curr = A;
    while((curr->val)<x){
        prev = curr;
        curr= curr->next;
    }
    struct ListNode *temp = curr->next;
    struct ListNode *prev2 = curr;
    
    
    while(temp!=NULL){
        if((temp->val)<x){
            struct ListNode *temp2 = temp->next;
            
            if(prev==curr){
                prev2->next = temp2;
                temp->next=prev;
                A=temp;
                prev=A;
                temp=temp2;
            }
            else {
                prev->next = temp;
                temp->next = curr;
                prev2->next = temp2;
                temp =temp2;
                prev= prev->next;
            }
                
        }
        else {
            temp = temp->next;
            prev2 = prev2->next;
        }
    }
    return A;
}
