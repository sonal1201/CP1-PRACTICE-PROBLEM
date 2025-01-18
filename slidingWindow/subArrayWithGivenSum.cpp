// ARRAY OF BOTH POS/NEG SUBARRAY WITH GIVEN SUM

// given sum = 13
// testCase = -4,7,2,-1,-4,3,1


// Boolean
void findExactSum(vector<int> &arr, int targetSum)
{
    int start = 0;
    int end = 0;
    int matchSum = 0;
    while (end < arr.size())
    {
        sum += arr[end];
        end++;
        if (matchSum == targetSum)
        {
            return true,
        }
        while (targetSum > matchSum)
        {
            matchSum -= arr[start];
            start++;
        }
    }
    return false;
}


//Total
void findExactSum(vector<int> &arr, int targetSum)
{
    int start = 0;
    int end = 0;
    int total=0;

    int matchSum = 0;
     while (end < arr.size())
    {
        sum += arr[end];
        end++;
        if (matchSum == targetSum)
        {
            total +=1;
        }
        while (targetSum > matchSum)
        {
            matchSum -= arr[start];
            start++;
        }
    }
    return false;
}

//min Length
void findExactSum(vector<int> &arr, int targetSum)
{
    int start = 0;
    int end = 0;

    int matchSum = 0;
    int maxi = INT_MAX;
     while (end < arr.size())
    {
        sum += arr[end];
        
        if (matchSum == targetSum)
        {
            maxi = max(maxi,end-start+1);
        }
        while (targetSum > matchSum)
        {
            matchSum -= arr[start];
            start++;
        }
        end++;
    }
    return false;
}