void lowerBound(vector<int>&arr,int target){
    int s=0;
    int e=arr.size()-1;
    int ans =-1;

    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]>target){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}