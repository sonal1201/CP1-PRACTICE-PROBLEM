// we have 1x4 or 4x1 tile
// rec Relation- f(n-1)+f(n-4)



void waysOfTile(int n,int res)
{
    {
        return;
    }

    if (n >= 1)
        return waysOfTile(n - 1, res += 1);
    if (n >= 4)
        return waysOfTile(n - 4, res += 4);
}

void noTile(int n)
{
    int res = 0;
    waysOfTile(n, res);
}