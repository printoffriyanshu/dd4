#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while (tt--)
int knapSack(int N, int W, int val[], int wt[])
{
    if (N == 0)
    {
        return (W / wt[0]) * val[0];
    }
    int nta = 0 + knapSack(N - 1, W, val, wt);
    int take = INT_MIN;

    if (wt[N] <= W)
    {
        take = val[N] + knapSack(N, W - wt[N], val, wt);
    }
    return max(take, nta);
}

int main()
{
    int W = 100;
    int val[] = { 10, 30, 20 };
    int wt[] = { 5, 10, 15 };
    cout << knapSack(2, W, val, wt);
    return 0;
}
