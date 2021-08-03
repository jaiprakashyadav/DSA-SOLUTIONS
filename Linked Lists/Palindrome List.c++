/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode* A){
    ListNode * curr = A;
    ListNode * prev  = NULL;
    ListNode * temp = NULL;
    while(curr){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

int Solution::lPalin(ListNode* A) {
    ListNode * temp = A;
    int len = 0 ;
    while(temp){
        len++;
        temp = temp ->next;
    }
    if(len==1) return 1;
    if(len%2!=0){
        len = (len+1)/2;
    }
    else {
        len = len/2;
    }
    temp = A;
    for(int i = 0 ; i<len ; i ++){
        temp = temp->next;
    }
    temp = reverse(temp);
    while(A && temp){
        if(A->val!= temp->val){
            return 0;
        }
        A= A->next;
        temp = temp->next;
    }
    return 1;
}
