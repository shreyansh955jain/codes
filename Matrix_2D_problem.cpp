#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{

cout<<"Shreyansh Jain,TMU 3rd year Passout!!"<<endl;
cout<<endl;
//problem is given as row and column sorted matrix then find the target element!....

int Matrix[4][4]={
	{2,4,6,8},
	{5,8,11,13},
	{7,14,17,18},
	{9,15,20,30}
};
for (int i = 0; i < 4; i++)
{
	for (int j= 0; j < 4; j++)
{
	cout<<Matrix[i][j]<<" ";
}
	cout<<endl;
}
int target=20;
int n=4;
int row=0,col=n-1;
bool found=false;
while(col>=0 && row<=n-1){
if (Matrix[row][col]==target)
{
	found=true;
	break;
}else  if (target>Matrix[row][col])
{
	row++;
}else{
     col--;
}

	
}
cout<<endl;
cout<<target<<" ";
cout<<(found?"elment is found":"element not found")<<endl;

	return 0;
}