#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while (tt--)
int rod(int N, int W, int val[])
{
    if (N == 0)
    {
        return W * val[0];
    }
    int nta = rod(N - 1, W, val);
    int take = INT_MIN,rodlen=N+1;      
     if (rodlen<=W)
     {
       take = val[N] + rod(N, W - N+1, val);
     }
     return max(take, nta);
}

int main()
{
    int length = 3;
    int val[]={10,20,20};
    cout << rod(length-1, length, val);
    return 0;
}
