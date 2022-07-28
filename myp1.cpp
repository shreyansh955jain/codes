#include<bits/stdc++.h>
#define ll long long int 
//#define lp(j,n) for(int i=j;i<n;i++)
//#define nlp(x,y,n,m) for(int i=x;i<n;i++)for(int j=y;j<m;j++)
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#define test int t;cin>>t;while(t--)
//const int mod = 1e9+7;
//const ll mod_l = 1e18+7;
using namespace std;
int Fabonacci_seriese(int n){

  if(n<=1)return n;
  return Fabonacci_seriese(n-1)+Fabonacci_seriese(n-2);
}
int main()
{
  int n=
for (int i = 0; i <=n ; ++i)
    {
      cout<<"f("<<i<<")"<<Fabonacci_seriese(i)<<endl;
    }   
 }
