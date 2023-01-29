    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || !head || !head->next) return head;
        ListNode* temp=head;
        int len = 0;
        while(temp){
            len++;
            temp=temp->next;
        }    
        int k1 = k%len;

        if(k1==0 || k1==len) return head;

        ListNode* slow = head;
        ListNode* fast = head;
        while(k1>0){
            fast=fast->next;
            k1--;
        }
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }

        ListNode* newStart = slow->next;
        slow->next=NULL;
        fast->next = head;
        return newStart;
    }
