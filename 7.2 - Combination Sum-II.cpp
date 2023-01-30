    void combi2(int i, vector<int>& s, vector<vector<int>>& ans, vector<int> temp, int target){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        
        for(int ind=i; ind<s.size(); ind++){
            if(ind>i && s[ind]==s[ind-1]) continue;
            if(s[ind]>target) break;
            temp.push_back(s[ind]);
            combi2(ind+1, s, ans, temp, target-s[ind]); 
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        combi2(0, candidates, ans, {}, target);
        return ans;
    }
