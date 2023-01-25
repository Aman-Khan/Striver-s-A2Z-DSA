    ll binarySearch(ll x){
        ll i=0;
        ll j =x;
        ll rt=0;
        ll mid = i+(j-i)/2;
        while(i<=j){
            ll temp = mid*mid;
            if(temp<=x){    
                i=mid+1; 
                rt=mid;
            }
            else{
                j=mid-1; 
            } 
            mid=i+(j-i)/2;
        }
        return rt;
    }
    long long int floorSqrt(long long int x) 
    {
        ll a = binarySearch(x);
        return a;
    }
