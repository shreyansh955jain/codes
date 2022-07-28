#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  string s;
  cin>>s;
  int largest=INT_MIN;
  int n=s.length();
  unordered_map<char,int>mp;
  for(auto i:s){
    mp[i]++;
  }
  // try with brute forece
  for(int i=0;i<n;i++){
      for(int j=i+1;j<=n;j++){
        int count=0;
        string str=s.substr(i,j);
        for(auto k:str){
        if(mp[k]<=n/2)count++;
        else break;
        }
        largest=max(largest,count);
    }
  }
  cout<<largest<<endl;
  }
  return 0;
}