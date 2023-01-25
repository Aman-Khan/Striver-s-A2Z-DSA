//1Approach TC - O(n) , SC - O(1)
  int maxProfit(vector<int>& prices) {
        int n=prices.size();
        
        int buy=INT_MAX;
        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            maxi = max(maxi, prices[i]-buy);
        }
        return maxi;
    }

//2Approach TC - O(n) , SC - O(n)
    int maxProfit(vector<int>& prices) {
        stack<int> st;
        int i=prices.size()-1;
        int maxi = 0;
        while(i>=0){
            if(!st.empty() && st.top()>prices[i]){
                maxi = max(maxi, st.top()-prices[i]);
            }
            else{
                st.push(prices[i]);
            }
            i--;
        }
        return maxi; 
    }
