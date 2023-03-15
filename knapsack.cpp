#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int knapsack(int a[],int p[],int n,int m){
    if (n==0||m==0)
    {
       return 0;
    }
    if (a[n-1]>m)
     {
        return knapsack(a,p,n-1,m);
     }
    else{
        return max(p[n-1]+knapsack(a,p,n-1,m-a[n-1]),knapsack(a,p,n-1,m));
     }
     
}
int main(){
int n,m;
cin>>n>>m;
int a[n],b[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    cin>>b[i];
}
cout<<knapsack(a,b,n,m);
return 0;
}
