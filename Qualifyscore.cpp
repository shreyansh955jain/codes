#include<bits/stdc++.h>
//#define ll long long
//#define lp(j,n) for(int i=j;i<n;i++)
//#define nlp(x,y,n,m) for(int i=x;i<n;i++)for(int j=y;j<m;j++)
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test int t;cin>>t;while(--t)
//const int mod = 1e9+7;
//const ll mod_l = 1e18+7;
using namespace std;codingmafia.cpp



void solve(){

        int l,r; cin>>l>>r;
        int a=l, b=r;
        while(a%3!=0){
          a++;
        }        
        while(b%3!=0){
          b--;

        }
        int n=(b-a)/3;
        cout<<n+1<<endl;
      }
      

int main()
{
    test
    {
  
 solve();
}
}

