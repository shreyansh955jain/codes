//basic st-8
#include<bits/stdc++.h>
using namespace std;
void PrintArray(int a[],int n){
for (int i = 0; i <n ; i++)
{
	cout<<a[i]<<" ";
}	
}

void SelectionSort(int arr[],int n){
for (int i = 0; i <n-1 ; i++)
{   int min_element_index=i;
	for (int j = i+1; j < n; j++)
	
{        if (arr[j]<arr[min_element_index])
        {
        	min_element_index=j;
        
        }
	}
		    int temp=arr[i];
        	arr[i]=arr[min_element_index];
        	arr[min_element_index]=temp;

}
}

int main(){
cout<<"Shreyansh Jain,TMU 3rd year Passout!!"<<endl;
cout<<endl;
cout<<"selection sort!!!"<<endl;
int arr[10]={2,8,4,1,3,6,9,10,0,-5};
int n=sizeof(arr)/sizeof(int);
cout<<"Array Before SORT"<<endl;
PrintArray(arr,n);
cout<<endl;

SelectionSort(arr,n);
cout<<endl;
cout<<"Array After SORT"<<endl;
PrintArray(arr,n);
return 0;
}