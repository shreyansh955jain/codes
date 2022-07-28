//basic st-8
#include<bits/stdc++.h>
using namespace std;
int  Linear_Search(int arr[],int n,int target){

for (int i = 0; i < n; ++i)
{
	if (arr[i]==target)
	{
		return i;
	}
}
return -1;
}
int Binary_Search(int arr[],int n,int target){

int i=0,l=n-1;
int middle=i+(l-i)/2;
while(i<=l){
if(arr[middle]==target){
	return middle;
}else if(arr[middle]>target)
{
     l=middle-1;
}else{
	i=middle+1;
}
}
return -1;
}
int main(){
cout<<"Shreyansh Jain,TMU 3rd year Passout!!"<<endl;
int a[15]={4,3,5,23,2,78,5,3,7,3,1};
int x=Linear_Search(a,sizeof(a)/sizeof(int),78);
 cout<<"position index of element i :"<<x<<endl;
if (x!=-1)
 {
 	cout<<"target element at i index :"<<a[x]<<endl;
 	/* code */
 } 
//step to search wrost-o[n],best0[1]
//#################binary search###############################
int A1[15]={1,2,4,6,7,12,15,16,22,25,33,36,39,45};
int y=Linear_Search(A1,sizeof(A1)/sizeof(int),6);
 cout<<"position index of element i :"<<y<<endl;
if (y!=-1)
 {
 	cout<<"target element at i index :"<<a[y]<<endl;
 	/* code */
 } 
//no of steps -->log[n]
//log16--->4
//log8-->3
 return 0;






