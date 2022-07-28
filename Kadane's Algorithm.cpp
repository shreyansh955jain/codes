#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[9]={-8,-2,-1};
int length =sizeof(arr)/sizeof(arr[0]);
int answer=INT_MIN ;
int sum=0;
for (int i = 0; i <length ; i++)
{       sum=sum+arr[i];
       if((sum<0)){
         sum=0;
       }else{
          if (answer<sum)
          {
            answer=sum;
          }
       
          }
      } 
cout<<"Shreyansh Jain"<<endl;
cout<<endl;
cout<<"The maximum Sub Array was :: "<<answer<<endl;
cout<<endl;
cout<<"KADANE'S_ALGORITHM"<<endl;

  }