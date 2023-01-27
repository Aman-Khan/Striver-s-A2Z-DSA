//Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
    Node* temp = new Node(x);
        if(!head){
            return temp;
        }
       else{ 
           temp->next = head;
           return temp;
       }
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       Node* temp = new Node(x);
       if(!head){
           return temp;
       }
       else{
           Node* rHead = head;
           while(head->next){
               head=head->next;
           }
           head->next = temp;
           return rHead;
       }
       // Your code here
    }
