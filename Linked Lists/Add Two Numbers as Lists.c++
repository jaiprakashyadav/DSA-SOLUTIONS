/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    int na = 0 , nb= 0;
    struct ListNode *tempa = A;
    struct ListNode *tempb = B;
    while (tempa!=NULL){
        na++;
        tempa=tempa->next;
    }
    tempa =A;
    while (tempb!=NULL){
        nb++;
        tempb=tempb->next;
    }
    tempb = B;
    if(nb>na){
        struct ListNode * C = A;
        A = B;
        tempa=A;
        B = C;
        tempb= B;
    }
    
    int carry = 0;
    while((tempa!=NULL)&&(tempb!=NULL)){
        int value = tempa->val + tempb->val + carry;
        if(value>=10){
            value = value - 10;
            carry=1;
            
        }
        else {
            carry =0;
        }
        tempa->val = value;
        tempa= tempa->next;
        tempb= tempb->next;
    }
    while(carry!=0){
        
        int value = tempa->val + carry;
        if(value>=10){
            value = value - 10;
            carry=1;
            if(tempa->next==NULL){
                tempa->val=0;
                ListNode *d = new ListNode(carry);
                tempa->next = d;
                tempa=tempa->next;
                carry=0;
                break;
            }
        }

        else {
            carry =0;
        }
        tempa->val = value;
        tempa = tempa->next;
        
            
    }
    return A;
}
