    Node* constructLL(vector<int>& arr) {
        Node* dummy = new Node(-1);
        Node* tail = dummy;
        for(auto i:arr){
            Node* temp = new Node(i);
            tail->next = temp;
            tail=tail->next;
        }
        return dummy->next;
    }
