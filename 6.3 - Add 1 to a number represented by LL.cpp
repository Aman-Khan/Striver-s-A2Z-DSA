    void reverse(Node* &prev, Node* &head, Node* forw){
        if(!forw){
            head->next = prev;
            return;
        }
        
        head->next = prev;
        prev = head;
        head=forw;
        reverse(prev, head, head->next);
    }
    Node* addOne(Node *head) 
    {
        if(!head) return head;
        Node* prev = NULL;
        reverse(prev, head, head->next);
        int carry=1;
        Node* temp = head;
        Node* hLast=NULL;
        while(temp){
            hLast = temp;
            int sum = temp->data+carry;
            temp->data = sum%10;
            carry=sum/10;
            temp=temp->next;
        }
        if(carry){
            Node* lastNode = new Node(carry);
            hLast->next = lastNode;
        }
        prev = NULL;
        reverse(prev, head, head->next);
        return head;
    }
