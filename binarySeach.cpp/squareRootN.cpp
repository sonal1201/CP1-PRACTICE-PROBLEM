void squareRoot(int n){
    int s =0;
    int e=n;
    while(s<=n){
        int mid = (e+s)/2;
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid>n){
            e =mid-1;
        }
        else{
           s=  mid+1
        }
    }
    if(s*s==n){
        return s-1
    }
}

121 -> 60 -> 30 ->15 -> 7 -> 22 ->11