    void getCommon(string& a, string b){
        int n = min(a.size(), b.size());
        string temp="";
        for(int i=0; i<n; i++){
            if(a[i]!=b[i]) break;
            else temp.push_back(a[i]);
        }
        a=temp;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string ans = strs[0];

        for(auto i:strs){
            getCommon(ans, i);
        }
        return ans;
    }
