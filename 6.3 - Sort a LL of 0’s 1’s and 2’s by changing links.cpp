    Node* segregate(Node *head) {
        
        Node* zeroNode = new Node(-1);
        Node* zeroTail = zeroNode;
        Node* oneNode = new Node(-1);
        Node* oneTail = oneNode;
        Node* twoNode = new Node(-1);
        Node* twoTail = twoNode;
        
        while(head){
            if(head->data==0){
                zeroTail->next=head;
                zeroTail=zeroTail->next;
            }
            else if(head->data==1){
                oneTail->next=head;
                oneTail=oneTail->next;
            }
            else{
                twoTail->next=head;
                twoTail=twoTail->next;
            }
            head=head->next;
        }
        if(!oneNode->next){
            zeroTail->next=twoNode->next;
            twoTail->next=NULL;
            return zeroNode->next;
        }
        zeroTail->next=oneNode->next;
        oneTail->next=twoNode->next;
        twoTail->next = NULL;
        return zeroNode->next;   
    }
