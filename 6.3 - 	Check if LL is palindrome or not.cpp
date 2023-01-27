    void reverse(ListNode* prev, ListNode* &head, ListNode* forw){
        if(forw==NULL){
            head->next = prev;
            return;
        }
        head->next = prev;
        prev = head;
        head = forw;
        forw = forw->next;
        reverse(prev, head, forw);
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* findMid = head;
        int cnt=0;
        while(findMid!=NULL){
            findMid=findMid->next;
            cnt++;
        }
        ListNode* mid=head;
        cnt=cnt/2;
        while(cnt>0){
            mid = mid->next;
            cnt--;
        }
        reverse(NULL, mid, mid->next);
        while(head!=NULL && mid!=NULL){
            if(head->val != mid->val){
                return false;
            }
            head=head->next;
            mid=mid->next;
        }
        return true;
    }
