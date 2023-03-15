#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int pal(string a,int i,int k){
     int pal=0,flag=1;
  for (int j = i; j < k/2-1; j++)
  {
    if (a[j]!=a[k-j])
    {
       flag=0;
       break;
    }
    
  }
  if (flag)
  {
    return pal++;
  }
  else
   return 0;
}
int sol(string a,int i,int j){
    int temp=0;
   for (int k = i; k <=j-1; k++)
   {
     temp += pal(a,i,k)+pal(a,k+1,j)+1;
   }
   
   return temp;
}
int main(){

  string s;
  cin>>s;
  int n=s.size();
  cout<<sol(s,1,n-1);
  

return 0;
}
