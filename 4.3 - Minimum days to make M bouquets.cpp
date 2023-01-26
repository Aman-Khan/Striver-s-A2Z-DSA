    bool getBouquet(vector<int>& bloomDay, int day, int m, int k){
        int bouCnt=0;
        int flowCnt=0;

        for(auto i:bloomDay){
            if(i<=day){
                flowCnt++;
                if(flowCnt==k){
                    bouCnt++;
                    flowCnt=0;
                }
            }
            else flowCnt=0;
            
            if(bouCnt>=m) return true;
        }
        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k>n)return -1;
        int minDays=INT_MAX;
        int maxDays=INT_MIN;
        for(auto i:bloomDay){
            minDays=min(minDays, i);
            maxDays=max(maxDays, i);
        }

        int i=minDays;
        int j=maxDays;

        int mid=i+(j-i)/2;

        while(i<=j){
            if(getBouquet(bloomDay, mid, m, k)){
                j=mid-1;
                minDays=mid;
            }
            else i=mid+1;
            mid=i+(j-i)/2;
        }

        return minDays;
    }
