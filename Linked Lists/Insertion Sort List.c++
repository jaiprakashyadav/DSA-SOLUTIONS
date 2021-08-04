/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode *head = A;
    if(not A or not A->next)    return A;
    while(A->next) {
        if(A->next->val < A->val) {
            ListNode *mark = A->next, *ptr = head, *prev = nullptr;
            A->next = A->next->next;
            while(ptr and ptr->val < mark->val) {
                prev = ptr;
                ptr = ptr->next;
            }
            if(prev == nullptr)     head = mark;
            else                    prev->next = mark;
            mark->next = ptr;
        }
        else    A = A->next;
    }
    return head;
}
