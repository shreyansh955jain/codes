#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
long long int Woodcutter(long long int A[],long long int start,long long int maximum,long long int neededwood){ 
long long int end=maximum;
long long int mid=(start+end)/2;
int cuttingsum=0;
//long long int size=sizeof(A)/sizeof(int);
for(long long int i=0;i<4;i++)
{
if(mid<=A[i]){
cuttingsum = cuttingsum+(A[i]-mid);
}
}
if((cuttingsum==neededwood)|| cuttingsum+1==neededwood){
    cuttingsum=0;
    return mid;
}else if(cuttingsum>neededwood){
        cuttingsum=0;
        Woodcutter(A,mid+1,end,neededwood);
}else if(cuttingsum<neededwood){
        cuttingsum=0;
        Woodcutter(A,start,mid-1,neededwood);
}else{
    return -1;
}
}
int main(){
long long int N,M;cin>>N>>M;
long long int A[N];
long long int sum=0;
long long int m1=INT_MIN;
for(long long int i=0;i<N;i++){
cin>>A[i];
sum=sum+A[i];
m1=max(m1,A[i]);
}
if(sum<M){
    cout<<"-1"<<endl;
}else if(sum==M){
    cout<<m1<<endl;
}else{
  long long int ans=Woodcutter(A,0,m1,M);
  cout<<ans<<endl;
}
}