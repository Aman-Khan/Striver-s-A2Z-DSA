    void insertNode(ListNode* &tail, int ele){
        if(tail == NULL){
            ListNode* temp = new ListNode(ele);
            tail = temp;
        }
        else{
            ListNode* temp = new ListNode(ele);
            tail->next = temp;
            tail = temp;
        }
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* addi = new ListNode(-1);
        ListNode* tail = addi;
        int carry = 0;
        while(l1!=NULL && l2!=NULL){
            int sum = 0+carry;
            sum+=l1->val;
            sum+=l2->val;
            int digit = sum%10;
            insertNode(tail, digit);
            carry = sum/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            int sum=carry;
            sum+=l1->val;
            int digit = sum%10;
            insertNode(tail, digit);
            carry = sum/10;
            l1=l1->next;
        }
        while(l2!=NULL){
            int sum=carry;
            sum+=l2->val;
            int digit = sum%10;
            insertNode(tail, digit);
            carry = sum/10;
            l2=l2->next;
        }
        if(carry!=0){
            insertNode(tail, carry);
        }
        return addi->next;
    }
