    bool areFighting(vector<int>& stalls, int k, int dis){
        int cow=1;
        int prev = stalls[0];
        for(int i=1; i<stalls.size(); i++){
            if(stalls[i]-prev>=dis){
                cow++;
                prev=stalls[i];
            }
            if(cow==k) return false;
        }
        return true;
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(), stalls.end());
        int maxDis = INT_MIN;
        for(auto i:stalls){
            maxDis=max(maxDis, i);
        }
        int i=1;
        int j=maxDis;
        
        int mid = i+(j-i)/2;
        int ans=0;
        while(i<=j){
            if(!areFighting(stalls, k, mid)){
                i=mid+1;
                ans=mid;
            }
            else j=mid-1;
            mid = i+(j-i)/2;
        }
        return ans;
    }
