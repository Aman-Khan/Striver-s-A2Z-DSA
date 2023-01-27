int countNodesinLoop(struct Node *head){
    if(!head) return 0;
    Node* slow = head;
    Node* fast = head->next;
    if(!fast) return 0;
    
    while(slow!=fast){
        if(!fast || !fast->next) return 0;
        slow=slow->next;
        fast=fast->next->next;
    }

    int cnt=1;
    slow = head;
    Node* loop = fast;
    fast = fast->next;
    while(fast!=loop){
        fast=fast->next;
        cnt++;
    }
    return cnt;
}
