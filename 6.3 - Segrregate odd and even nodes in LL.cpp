    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        if(!head->next) return head;

        ListNode* oddNode = new ListNode(-1);
        ListNode* oddTail = oddNode;
        ListNode* evenNode = new ListNode(-1);
        ListNode* evenTail = evenNode;

        bool flag = true;
        while(head){
            if(flag){
                oddTail->next = head;
                oddTail=oddTail->next;
            }
            else{
                evenTail->next = head;
                evenTail=evenTail->next;
            }
            flag=!flag;
            head=head->next;
        }
        evenTail->next=NULL;
        oddTail->next = evenNode->next;

        return oddNode->next;
    }
