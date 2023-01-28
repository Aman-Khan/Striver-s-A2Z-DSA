    node* reverseInKGroup(node *head, int k){
        if(!head) return NULL;
        
        node* prev = NULL;
        node* curr = head;
        node* forw = NULL;
        int cnt = 0;
        
        while(cnt<k && curr){
            forw = curr->next;
            curr->next=prev;
            prev = curr;
            if(!forw) return curr;
            curr = forw;
            cnt++;
        }

        head->next = reverseInKGroup(curr, k);
        return prev;
        
    }
    struct node *reverse (struct node *head, int k)
    { 
        node* ans = reverseInKGroup(head, k); 
        return ans;
    }
