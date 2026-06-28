class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return head;
        }
        int k = 0;
        ListNode*curr = head;
        while(curr!=NULL){
            curr = curr -> next;
            k++;
        }
        if(n>k){ //n koi faltu bada number nhi
            return head;
        }
        if(k==n){ //for 1st node delete
            ListNode* temp = head;
            head=head->next;
            delete temp;
            return head;
        }
        curr = head;
        //Reach the node just before the nth node
        for(int i = 1;i<k-n;i++){
            curr = curr->next;
        }
        ListNode* temp = curr -> next;
        curr -> next = temp -> next;
        delete temp;
        return head;
    }
};
