    bool searchKey(int n, struct Node* head, int key) {
        while(head){
            if(head->data==key) return true;
            head=head->next;
        }
        return false;
    }
