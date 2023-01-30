void insertAtPos(stack<int>& st, int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    
    int val = st.top();
    if(val<=x){
        st.push(x);
        return;
    }
    st.pop();
    
    insertAtPos(st, x);
    st.push(val);
}

void stacker(stack<int>& st){
    if(st.empty()) return;
    
    int val = st.top();
    st.pop();
    stacker(st);
    insertAtPos(st, val);
}
