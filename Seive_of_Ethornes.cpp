#include<bits/stdc++.h>
//#define ll long long
//#define lp(j,n) for(int i=j;i<n;i++)
//#define nlp(x,y,n,m) for(int i=x;i<n;i++)for(int j=y;j<m;j++)
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#define test int t;cin>>t;while(t--)
//const int mod = 1e9+7;
//const ll mod_l = 1e18+7;
using namespace std;
int Seive_of_Ethrones(int n)
{    
   //arr[100].. 
std::vector<int > v(n+1,0);
for (int i = 2; i*i<=n; i++)
{   if (v[i]==0)
    {    /* code */
        for (int j = 2*i; j <=n ; j+=i)
        {   /* code */
            v[j]=1;
        }
    }
}
for (int i = 2; i <=n ; i++)
{
    /* code */
    if (v[i]==0)
    {
       cout<<i<<endl; /* code */
    }
}
}
int main()
{
    int n;cin>>n;
    Seive_of_Ethrones(n);   

    }


