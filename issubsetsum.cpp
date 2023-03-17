#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
bool issubstsum(int se[],int n,int sum){
    if (n==0)
    {
       return false;
    }
    if (sum==0)
    {
       return true;
    }
    if (se[n-1]>sum)
    {
        return issubstsum(se,n-1,sum);
    }
    else{
        return issubstsum(se,n-1,sum)||issubstsum(se,n-1,sum-se[n-1]);
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
   cout<<issubstsum(se,n,sum);
   
return 0;
}
