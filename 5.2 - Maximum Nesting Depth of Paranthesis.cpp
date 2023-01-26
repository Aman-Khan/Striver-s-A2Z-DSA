    int maxDepth(string s) {
        stack<char> st;
        int maxD=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(') st.push('(');
            else if(s[i]==')'){
                int len = st.size();
                maxD = max(maxD, len);
                st.pop();
            }
        }
        return maxD;
    }
