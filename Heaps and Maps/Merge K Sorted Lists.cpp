/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode * rev(ListNode * curr){
    ListNode * prev=  NULL;
    ListNode * temp =  NULL;
    while(curr){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    priority_queue < pair <int , ListNode * >  > pq;
    for(int  i = 0 ; i <A.size();i++){
        while(A[i]!=NULL){
            pq.push({A[i]->val,A[i]});
            A[i]=A[i]->next;
        }
    }
    ListNode * head = new ListNode(-1);
    ListNode * curr = head;
    while(!pq.empty()){
        int x = pq.top().first;
        ListNode* temp = pq.top().second;
        curr->next = temp;
        curr = curr->next;
        pq.pop();
    }
    curr->next = NULL;
    
    return rev(head->next);
}
