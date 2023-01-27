    ListNode* merge(ListNode* head1, ListNode* head2){
        if(head1==NULL) return head2;
        if(head2==NULL) return head1;

        ListNode* merged = new ListNode(-1);
        ListNode* tail = merged;

        while(head1!=NULL && head2!=NULL){
            if(head2->val<head1->val){
                tail->next = head2;
                head2 = head2->next;
                tail = tail->next;
            }
            else{
                tail->next = head1;
                head1 = head1->next;
                tail = tail->next;
            }
        }

        if(head1!=NULL){
            tail->next = head1;
        }
        if(head2!=NULL){
            tail->next = head2;
        }
        return merged->next;
    }

    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* mid = findMid(head);
        
        ListNode* head1 = head;
        ListNode* head2 = mid->next;
        mid->next = NULL;

        head1 = sortList(head1);
        head2 = sortList(head2);
        return merge(head1, head2);
    }
