//basic st-9
#include<bits/stdc++.h>
using namespace std;
void PrintArray(int a[],int n){
for (int i = 0; i <n ; i++)
{
	cout<<a[i]<<" ";
}	
}
void InsretionSort(int arr[],int n){
int i,  current, j;
    for (i = 1; i < n; i++)
    {
        current = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void BubbleSort(int arr[],int n){
for (int i = 0; i <n ; i++)
{ 
	for (int j = 0; j < n-1-i; j++)
	{
	 
	 if (arr[j]>arr[j+1])
	 {
	 	int temp=arr[j];
	 	arr[j]=arr[j+1];
	 	arr[j+1]=temp;
	 }
	}

}
}

int main(){
cout<<"Shreyansh Jain,TMU 3rd year Passout!!"<<endl;
cout<<endl;
cout<<"@@@@@@ InsretionSort @@@@@@"<<endl;
cout<<endl;
int arr[10]={2,8,4,1,3,6,9,10,0,-5};
int n=sizeof(arr)/sizeof(int);
cout<<"Array Before SORT"<<endl;
PrintArray(arr,n);
InsretionSort(arr,n);
cout<<endl;
cout<<"Array After SORT"<<endl;
PrintArray(arr,n);
cout<<endl;
cout<<endl;
int arr1[10]={2,8,4,1,3,6,9,10,0,-5};
int n1=sizeof(arr)/sizeof(int);
cout<<"@@@@@@ BubbleSort @@@@@@"<<endl;
cout<<endl;
cout<<"Array Before SORT"<<endl;
PrintArray(arr1,n1);
BubbleSort(arr1,n1);
cout<<endl;
cout<<"Array After sort"<<endl;
PrintArray(arr1,n1);

cout<<endl;
return 0;
}