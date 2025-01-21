void solve(int res, string s, int n)
{
    if (s.size()==0)
        return;

    // if we are in staring index push 0 and 1 or vice versa;
    if (res.size == 0)
    {
        res += '1';
        res += '0';
        return res;
    }

    // then check the last index after inserting the 0 or 1 if it is 1 then insert 0 or vice versa
    if (res[res.size() - 1] == '1')
        return solve(res += '0', s, n - 1);
    else
        return solve(res += '1', s, n - 1);
}

void binaryString(string str, int n)
{
    solve(0, str, n);
}