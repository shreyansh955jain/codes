#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
cout<<"shreynsh_jain"<<endl;
cout<<endl;
cout<<"this is COUNT SORT ALGORITHM"<<endl;
int  a[10]={2,4,1,9,1,3,6,7,9,5};
int c[10]={0};
for (int i = 0; i < 10; i++)
{
    int x=a[i];
    c[x]++;	
}

for (int i = 0; i < 10; i++)
{
	for (int j = 0; j < c[i]; j++)
	{
		cout<<i<<" ";
	}
}
return 0;
}