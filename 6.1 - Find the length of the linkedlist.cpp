    int getCount(struct Node* head){
        if(!head) return 0;
        
        int cnt=getCount(head->next)+1;
        return cnt;
    }
