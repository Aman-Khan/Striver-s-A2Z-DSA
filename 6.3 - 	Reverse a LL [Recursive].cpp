    void recursive( ListNode* &prev, ListNode* &head, ListNode* forw){
        if(!forw){
            head->next = prev;
            return;
        }

        head->next = prev;
        prev = head;
        head=forw;
        recursive(prev, head, forw->next);

    }
