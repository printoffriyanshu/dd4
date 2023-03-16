#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int knapSack(int n,int W,int wt[],int val[]){
    int dp[W+1];
    memset(dp,0,sizeof(dp));
    for (int i = 0; i <= W; i++)
    {
        for (int j = 0; j <= n; j++)
        {
          if(wt[j]<=i)
             dp[i]=max(dp[i],dp[i-wt[j]]+val[j]);
        }
        
    }
    return dp[W];
}
int main(){
int W = 100;
    int val[] = { 10, 30, 20 };
    int wt[] = { 5, 10, 15 };
    cout << knapSack(2, W, wt, val);
 

return 0;
}
