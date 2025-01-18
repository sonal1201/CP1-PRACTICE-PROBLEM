void atMostK(string s, int k)
{
    int start = 0;
    int end = 0;

    int n = s.size();
    map<char, int> mp;
    int maxi = INT_MIN;

    while (end < n)
    {
        mp[s[end]]++;
        if (mp.size() > k)
        {
            mp[s[start]]--;
            if (mp[s[start]] == 0)
            {
                mp.erase(mp[s[start]]);
                start++;
            }
        }
        if (mp.size() <= k)
        {
            maxi = max(maxi, end - start + 1);
        }
        end++;
    }
}