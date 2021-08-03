/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    
    
    
    ListNode * ptr = new ListNode(0);
    ListNode * temp = ptr ; 
    while(A!=NULL && B!=NULL){
        if(A->val <= B->val){
            temp->next = A;
            A= A->next;
            temp = temp->next;
        }
        else {
            temp->next = B;
            B= B->next;
            temp = temp->next;
        }
    }
    while(A!=NULL){
        temp->next = A;
        A= A->next;
        temp = temp->next;
    }
    while(B!=NULL){
        temp->next = B;
        B= B->next;
        temp = temp->next;
    }
    temp->next = NULL;
    return ptr->next;
}
