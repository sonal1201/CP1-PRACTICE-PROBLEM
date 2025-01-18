// Hint findMax Ele and FindMin ele
//  and one more check for possible

class Solution
{
public:
    int isPossibleDiv(vector<int> &nums, int mid)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += ceil((double)nums[i] / (double)mid);
        }

        return sum;
    }

    int smallestDivisor(vector<int> &nums, int threshold)
    {

        int s = 1;
        int e = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            e = max(e, nums[i]);
        }
        int ans = -1;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (isPossibleDiv(nums, mid) <= threshold)
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return ans;
    }
};