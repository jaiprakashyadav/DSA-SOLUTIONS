/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    if(A->next == NULL){
        return A;
    }
    /*struct ListNode *head = A->next;
    struct ListNode *curr = A->next;
    struct ListNode *prev = A;
    prev->next = curr->next;
    curr->next = prev;
    A= curr;
    if(prev->next == NULL){
        return A;
    }
    curr=prev->next;
    
    struct ListNode *temp = curr->next;
    
    while(curr!=NULL){
        if(curr->next == NULL){
            break;
        }
        prev->next = temp;
        curr->next = temp->next;
        temp->next = curr;
        prev= curr;
        if(curr->next == NULL){
            break;
        }   
        curr= curr->next;
        if(curr->next == NULL){
            break;
        }
        temp = curr->next;
    }
    return A;*/
    
    
    ListNode * curr = A;
    ListNode * prev = NULL;
    ListNode * head = NULL;
    while(curr && curr->next){
        ListNode *temp  = curr->next;
        curr->next = temp->next;
        temp->next = curr;
        if(prev == NULL){
            prev = curr;
            head = temp;
        }
        else {
            prev->next=temp;
            prev = curr;
        }
        curr = curr->next;
    }
    return head;
}
