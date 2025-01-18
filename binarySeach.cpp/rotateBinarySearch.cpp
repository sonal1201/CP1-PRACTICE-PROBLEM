/// HINT  -  if target in 1st part and i m standing in 2nd part do s= mid+1
         //  if target in 2nd part and i m standing in 1st part do e= mid-11


// 3|4|5|6|7|1|2 t=2
void rotateBinary(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size();
    int lastEle  = arr[r];

    while (start <= end)
    {

        int mid = start + (end - start) / 2;
        // target in 1st part  and i m standing in 2nd part
        if(target<=lastEle && arr[mid]>lastEle){
            start = mid+1;
        }
         // target in 2nd part  and i m standing in 1st part
        else if(target>lastEle && arr[mid]<=lastEle){
            end = mid-1;
        }
        else{
            if(target== arr[mid]){
                return mid;
            }
            else if(target>arr[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}