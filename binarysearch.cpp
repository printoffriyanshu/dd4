#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int issubstsum(int se[],int n,int sum,vector<vector<int>> &v){
    if (n==0)
    {
       return 0;
    }
    if (sum==0)
    {
       return 1;
    }

    if (v[n][sum]!=-1)
    {
       return v[n][sum];
    }
    
    if (se[n-1]>sum)
    {
        return v[n][sum]= issubstsum(se,n-1,sum,v);
    }
    else{
        return v[n][sum]= issubstsum(se,n-1,sum,v)||issubstsum(se,n-1,sum-se[n-1],v);
    }
    
    
    
}
int main(){
   int n,sum;
   cin>>n>>sum;
   int se[n];
   for (int i = 0; i < n; i++)
   {
    cin>>se[i];
   }
   vector<vector<int>> v(n+1,vector<int>(sum+1,-1));
   cout<<issubstsum(se,n,sum,v);
   
return 0;
}