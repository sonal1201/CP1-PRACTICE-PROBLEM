void floorCeil(vector<int>arr,int target){
    int start=0;
    int end = arr.size()-1;
    int floorAns =-1;
    while(start<=end){
        if(target<=arr[mid]){
            ans = arr[mid];
            end =mid-1;
        }
        else{
            start = mid-1;
        }
    }

    while(start<=end){
        if(target<arr[mid]){
            
            end =mid-1;
        }
        else{
            start = mid-1;
        }
    }

    return {floorans,arr[start]};

}