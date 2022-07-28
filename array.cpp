#include<iostream>
using namespace std;
int  main(int argc, char const *argv[])
{

    cout<<"Shreyansh Jain,TMU 3rd year Passout!!";
	int arr[4]={1,2,3,4};
    for (int i = 0; i <sizeof(arr)/sizeof(arr[0]); i++)cout<<arr[i]<<endl;
    for(int i = 0; i <sizeof(arr)/sizeof(arr[0]); i++) cout<<arr[i]+100<<endl;
    int sum=0;  
    for (int i = 0; i <sizeof(arr)/sizeof(arr[0]); i++){cin>>arr[i];sum=sum+arr[i]; }
    cout<<sum<<endl;
    char matrix[3][3];
    for (int i = 0; i < 3; i++)
    {for (int j = 0; j < 3; j++)
    {
    	cin>>matrix[i][j];
    }}

    for (int i = 0; i < 3; i++)
    {for (int j = 0; j < 3; j++)
    {
    	cout<<matrix[i][j];
    }
    cout<<endl;
}
	return 0;


}

