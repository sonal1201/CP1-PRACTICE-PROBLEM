// bloomDay = [1,10,3,10,2], m = 3, k = 1

// we have to make 3 bookquet  with adju of 1

// 0,1,2,3,4 <--- no. flowers
// 1,10,3,10,2 <---- day to bloom

// adjus -> 1 | 3 | 2

class Solution
{
public:
    bool isPossible(vector<int> &arr, int day, int m, int k)
    {
        int cnt = 0;
        int noBukt = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] <= day)
            {
                cnt++;
            }
            else
            {
                noBukt += (cnt / k);
                cnt = 0;
            }
        }
        noBukt += (cnt / k);
        if (noBukt >= m)
            return true;
        else
            return false;
    }

    int minDays(vector<int> &bloomDay, int m, int k)
    {

        int s = INT_MAX;
        int e = INT_MIN;
        int n = bloomDay.size();
        if ((long long)(m)*k > n)
            return -1;

        for (int i = 0; i < n; i++)
        {
            s = min(s, bloomDay[i]);
            e = max(e, bloomDay[i]);
        }
        int ans = -1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (isPossible(bloomDay, mid, m, k))
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