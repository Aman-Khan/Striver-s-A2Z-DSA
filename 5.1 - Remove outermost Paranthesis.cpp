    string removeOuterParentheses(string s) {
        int b=0;
        stack<char> indSt;
        string ans="";
        int start;
        int end=0;
        int n=s.length();
        for(int i=0; i<n; i++){
            if(indSt.size()==0) start=i;
            if(s[i]=='('){
                indSt.push(s[i]);
                end++;
            }
            else{
                if(indSt.size()==1){
                    int len=i-(start+1);
                    ans+=s.substr(start+1, len);
                    end=0;
                }
                indSt.pop();
                end++;
            }
        }
        return ans;
    }
