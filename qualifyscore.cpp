#include<bits/stdc++.h>
//#define ll long long
//#define lp(j,n) for(int i=j;i<n;i++)
//#define nlp(x,y,n,m) for(int i=x;i<n;i++)for(int j=y;j<m;j++)
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test int t;cin>>t;while(t--)
//const int mod = 1e9+7;
//const ll mod_l = 1e18+7;
using namespace std;
int main()
{
    test
    {
        int n;
        char c = 'a';
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cout<<c++;
            if(c=='z'+1)
                c='a';
        }
        cout<<"\n";
    }
}

