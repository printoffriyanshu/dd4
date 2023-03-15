#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
int fuc(string s1,string  s2,int i,int j,vector<vector<int>> v){
    if (i==0||j==0)
    {
        return 0;
    }
   if (v[i][j]!=-1)
   {
    return v[i][j];
   }
   if (s1[i]==s2[j])
   {
    return v[i][j]=1+fuc(s1,s2,i-1,j-1,v);
   }
   else
    return v[i][j]=max(fuc(s1,s2,i-1,j,v),fuc(s1,s2,i,j-1,v));
   
   
    
    
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    vector<vector<int>> v(n+1,vector<int>(m+1,-1));
    cout<<fuc(s1,s2,n,m,v);
return 0;
}