

void solve(int n, int ones, int zeros)
{
    if (n <= 1)
    {
        return 1;
    }
    int sum = 0;
    sum += solve(n - 1, ones, zeros + 1);

    if (ones + 1 > zeros)
    {
        sum += solve(n - 1, ones + 1, zeros);
    }
}

int main()
{
    solve(n, 0, 0);
}