    void deleteNode(Node* &head, Node* &rhead){
        if(!head->next && !head->prev){
            head->data = -1;
            rhead=head;
            return;
        }
        
        if(head->prev==NULL){
            head=head->next;
            head->prev = NULL;
            rhead=head;
        }
        else if(head->next==NULL){
            head=head->prev;
            head->next = NULL;
        }
        else{
            Node* left = head->prev;
            Node* right = head->next;
            left->next = right;
            right->prev = left;
            head=right;
        }
    }
        
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        Node* defHead = *head_ref;

        while(defHead){
            if(defHead->data==x){
                deleteNode(defHead, *head_ref);   
            }
            else{
                defHead=defHead->next;            
            }
        }
    }
