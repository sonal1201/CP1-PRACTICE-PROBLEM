#include <bits/stdc++.h>
using namespace std;

void recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    recursion(n - 1);
}

int main()
{
    recursion(10);
}