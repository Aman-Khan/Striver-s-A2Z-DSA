    void generate(int i, vector<string>& ans, string temp, int n, int b){
        if(b<0) return;
        if(i==n){
            if(b==0){
                ans.push_back(temp);
            }
            return;
        }
        
        generate(i+1, ans, temp+'(', n, b+1);
        if(i!=0){
            generate(i+1, ans, temp+')', n, b-1);
        }
        
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> ans;
        generate(0, ans, "", n*2, 0);
        return ans;
    }
