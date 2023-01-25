 bool canEat(vector<int> piles, int h, int bana){
        int cnt=0;
        for(int i=0; i<piles.size(); i++){
            cnt+=(piles[i]/bana);
            if(piles[i]%bana!=0) cnt++;
            if(cnt>h) return false;
        }
        return true;
    }
    int binarySearch(vector<int>& piles, int h){
        int i=1; 
        int j;
        
        for(auto i:piles){
            j=max(j, i);
        }

        long long mid = i+(j-i)/2;
        int kokoEater=0;
        while(i<=j){
            if(canEat(piles, h, mid)){
                kokoEater=mid;
                j=mid-1;
            }
            else i=mid+1;
            mid = i+(j-i)/2;
        }
        return kokoEater;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        return binarySearch(piles, h);
    }
