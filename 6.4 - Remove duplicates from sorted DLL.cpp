    Node * removeDuplicates(struct Node *head){
        if(!head) return head;
        Node* prev = NULL;
        Node* ans = head;
        while(head){
            Node* tempHead = head;
            head = head->next;
            while(head && head->data == tempHead->data){
                head=head->next;
            }
            tempHead->next = head;
            if(head){
                head->prev = tempHead;
            }
        }
        return ans;
    }
