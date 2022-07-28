#include<bits/stdc++.h>
//#define ll long long
//#define lp(j,n) for(int i=j;i<n;i++)
//#define nlp(x,y,n,m) for(int i=x;i<n;i++)for(int j=y;j<m;j++)
//#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define test int t;cin>>t;while(t--);
#include<map>
//const int mod = 1e9+7;
//const ll mod_l = 1e18+7;
using namespace std;
int main(){
map<int,int> mp;
int n;cin>>n;
int target;cin>>target;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
bool pair=false;
for (int i = 0; i < n; ++i)
{

    mp[target-arr[i]]=arr[i];
    if(mp.count(arr[i])){
        pair=true;
        cout<<"("<<mp[arr[i]]<<","<<arr[i]<<")"<<endl;
    }
}
if (!pair)
   {
    cout<<"NO pair found"<<endl;
   }

}

















// //brute_force solution --->o(3^N)
// //optimize solution --->o(n^2)         3xN^2-->N^2
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;cin>>n;  
//   int a[n][n];           
//   for(int i=0;i<n;i++){//col
//     for (int j=0;j<n;j++){//row
//         cin>>a[i][j];
//     } 
// }
// cout<<"This is a matrix need to find max sum path::"<<endl;
// for (int i=0 ; i<n; i++){//col
//  for (int j= 0; j<n; j++){//row
//         cout<<a[i][j]<<" ";  }
// cout<<endl;
// }

// for (int j =1 ; j < n; j++){//col
//    for (int i = 0; i< n; i++){//row 
//         if (i==0)
//         {   int m1=max(a[i][j-1]+a[i][j],a[i+1][j-1]+a[i][j]);
//             a[i][j]=m1;
//         }else if(i==n-1)
//         {   int m2=max(a[i][j-1]+a[i][j],a[i-1][j-1]+a[i][j]);
//             a[i][j]=m2;
//         }else{
//             int m1=max(a[i][j-1]+a[i][j],a[i-1][j-1]+a[i][j]);
//             int m2=max(a[i][j-1]+a[i][j],a[i-1][j-1]+a[i][j]);
//             a[i][j]=max(m1,m2);
//         }
//     }
//   }
// cout<<endl;  
// cout<<"Matrix After max sum path::"<<endl;
// for (int i=0 ; i < 4; i++){//col
//   for (int j= 0; j<4; j++){//row
//         cout<<a[i][j]<<"  ";
//     }
// cout<<endl;
// }
// }