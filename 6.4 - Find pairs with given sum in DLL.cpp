    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int, int>> ans;
        Node* right = head;
        Node* left = head;
        while(right->next){
            right=right->next;
        }
        
        while(left && right && left->data<right->data){
            int sum = left->data+right->data;
            if(sum==target){
                ans.push_back({left->data, right->data});
                left=left->next;
                right=right->prev;
            }
            else if(sum>target){
                right=right->prev;
            }
            else{
                left=left->next;
            }
        }
        return ans;
    }
