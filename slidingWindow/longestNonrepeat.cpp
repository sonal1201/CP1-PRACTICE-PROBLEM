class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> mp(256, -1);

        int start = 0;
        int end = 0;
        int maxi = INT_MIN;
        int n = s.size();

        while (end < n)
        {
            if (mp[s[end]] != -1)
            {
                if (mp[s[end]] >= start)
                {
                    start = mp[s[end]] + 1;
                }
            }

            maxi = max(maxi, end - start + 1);
            mp[s[end]] = end;
            end++;
        }
        return maxi;
    }
};