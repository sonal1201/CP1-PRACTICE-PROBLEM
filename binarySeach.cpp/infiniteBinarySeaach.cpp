void BinarySearch(){

    while(s<=e){
        int end = (start+end)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<=target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}

int infiniteBinarySeach(vector<int>&arr,int target){
    int s =0;
    int e =1;
    while(true){
        if(target<=arr[end]){
            return BinarySearch(arr,s,e,target);
        }
        start = end+1;
        end *=2;
    }
}