// str = judunasiv  pattern = uaiv;
// MY SOLUTION

// LC->76
void containAllChar(string str, string pattern)
{
    int start = 0;
    int end = 0;

    int n = str.size();
    vector<int> fq(26, 0);

    for (int i = 0; i < n; i++)
    {
        fq[pattern[i] - 'a']++;
    }

    int mini = INT_MAX;
    while (end <= str.size - 1)
    {
        int nc = str[end] - 'a';
        if (fq[end] >= 1)
        {
            right++;
        }
        if (fq[end] == 0)
        {
            left++;
        }
        mini = min(mini, end - start + 1);
    }
}

//////////--------------------//////////////

bool isPatternPresent(int subStrFm[], int patternFm[])
{
    for (int i = 0; i < 26; i++)
    {
        if (subStrFm < patternFm)
        {
            return false;
        }
    }
    return true;
}

void fillFreq(int &patternFm[], string pattern)
{
    for (auto i : pattern)
    {
        patternFm[i - 'a']++;
    }
}

pair<int,int> allCharOfPatternMinSubstring(string str , string pattern{
    int start = 0;
    int end = 0;
    int n = s.size();
    int patternFm(26){0};

    fillFreq(patternFm, pattern);

    int subStrFm[26]{0};

    int minLen = INT_MAX;
    int finalState = 0;

    while (end < n - 1)
    {
        end++;
        char nc = s[end];
        subStrFm[nc - 'a']++;

        while (isPatternPresent(subStrFm, patternFm))
        {
            if (minLen > end - start + 1)
            {
                minLen = end - start + 1;
                finalState = start
            }
            subStrFm[str[start] - 'a']--;
            start++;
        }
    }

    return finalState;
}
