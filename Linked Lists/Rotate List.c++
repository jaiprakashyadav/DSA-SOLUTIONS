/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    struct ListNode *last = A;
    int n = 1;
    while(last->next!=NULL){
        n+=1;
        last=last->next;
    }
    B=B%n;
    if(B==0){
        return A;
    }
    struct ListNode *temp = A, *newhead ;
    n=n-B;
    for(int i=1;i<n;i++){
        temp=temp->next;
    }
    newhead= temp->next;
    last->next=A;
    temp->next=NULL;
    return newhead;
}
