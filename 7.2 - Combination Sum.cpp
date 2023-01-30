    void combinator(int i, vector<int>& s, vector<vector<int>>& ans, vector<int> temp, int target){
        if(target==0){
            ans.push_back(temp);
            return;
        }

        for(int ind=i; ind<s.size(); ind++){
            if(ind>i && s[ind]==s[ind-1]) continue;
            if(s[ind]>target) break;
            temp.push_back(s[ind]);
            combinator(ind, s, ans, temp, target-s[ind]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &A, int B) {
        sort(A.begin(), A.end());
        vector<vector<int>> ans;
        combinator(0, A, ans, {}, B);
        return ans;
    }
