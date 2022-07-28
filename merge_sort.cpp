#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void merge(vector<int> &v,vector<int>&temp, int low ,int mid ,int high)
{
 int i=low;//low to mid 
 int j=mid+1; // mid to high 
 int count=0;
 while(i<=mid &&j<=high)
  {
    if (v[i]<=v[j]){
    temp[count++]=v[i];
    i++;
  }else{
    temp[count++]=v[j];
    j++;
  }
}
while(i<=mid){ temp[count++]=v[i];i++;}
while(j<=high){ temp[count++]=v[j];j++;}
for (int k=low,x=0;k<=high;k++,x++)
{
    v[k]=temp[x];
    /* code */
}

}

void merge_sort(vector<int> &arr,vector<int>&temp,int low ,int high){
//&r this is refrence variable so whatever the changes makes element there  it will gonna reflecti into main arrayy.

int mid =(low+high)/2;
merge_sort(arr,temp,low,mid);
merge_sort(arr,temp,mid+1,high);
merge(arr,temp,low,mid,high);
}

int main(){
vector<int> data{12,14,112,113,15,19,100};
vector<int>temp(data.size());
merge_sort(data,temp,0,data.size()-1);

for (int i = 0; i <data.size(); i++)
{
    cout<<data[i]<<",";
    /* code */
}
cout<<endl;
}