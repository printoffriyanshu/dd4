#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int sol(int a[],int i,int j,vector <vector<int>> &v){
  if (i>=j)
  {
    return 0;
  }
  if (v[i][j]!=-1)
  {
    return v[i][j];
  }
  
  
  int min_cost=INT_MAX;
   for (int k = i; k <=j-1; k++)
   {
    int temp=sol(a,i,k,v)+sol(a,k+1,j,v)+(a[j]*a[i-1]*a[k]);
    min_cost=min(min_cost,temp);
   }
    return v[i][j]=min_cost;
}
int main(){

  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  vector <vector<int>> v(n+1,vector<int>(n+1,-1));
  cout<<sol(a,1,n-1,v);
  

return 0;
}