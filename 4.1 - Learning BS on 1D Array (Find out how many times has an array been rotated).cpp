    int breakPoint(int arr[], int n){
        int i=0;
        int j=n-1;
        int pivot = arr[0];
        int mid = i+(j-i)/2;
        
        while(i<j){
            if(arr[mid]>=pivot){
                i=mid+1;
            }
            else j=mid;
            mid=i+(j-i)/2;
            
        }
        return mid;
    }

	int findKRotation(int arr[], int n) {
	   int bp = breakPoint(arr, n);
	   if(bp==n-1 && arr[0]<arr[n-1]){
	       bp=0;
	   }
	   return bp;
	}
