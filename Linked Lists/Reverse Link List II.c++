/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


ListNode* reverse(ListNode * ptr1 , ListNode *ptr2){
    ListNode * prev = NULL;
    ListNode * temp = NULL;
    while(ptr1!=ptr2){
        temp = ptr1->next;
        ptr1->next = prev;
        prev = ptr1;
        ptr1 = temp;
    }
    ptr1->next = prev;
    prev = ptr1;
    return prev;
}
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    
    ListNode *curr = A;
    ListNode *ptr1 = NULL;
    ListNode *ptr2 = NULL;
    ListNode *temp1 = NULL;
    ListNode *temp2 = NULL;
    int len = 0 ;
    while(curr){
        len++;
        if(len==B){
            ptr1 = curr;
        }
        if(len==C){
            ptr2 = curr;
            temp2 = ptr2->next;
        }
        curr= curr->next;
    }
    if(len==1){
        return A;
    }
    temp1 = A;
    while(temp1!=ptr1 && temp1->next!=ptr1){
        temp1 = temp1->next;
    }
    if(ptr1==A){
        ListNode * head = reverse(ptr1,ptr2);
        ptr1->next = temp2;
        return head;
    }
    temp1->next = reverse(ptr1,ptr2);
    ptr1->next = temp2;
    return A;
    
    
}
