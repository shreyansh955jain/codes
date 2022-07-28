//basic st-11
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
   int  Matrix[101][101];
   int n =7;
   //.... Matrix[n][n]={0};
   for (int i = 0; i < n; i++)
   {
   	    for (int j = 0; j < n; j++)
   	    {
   	    	Matrix[i][j]=0;
   	    }
   }
  int  count=1;
  int row=0,col=0;
  int dir=0;
  while(count<=n*n){
     Matrix[row][col]=count;
    if (dir==0)
     {   
		        if(col== n-1 || Matrix[row][col+1]>0)
		        {
	             		dir=1;
	             		row++;
		         }else{
                        col++;
		         }
     }else if(dir==1){
               if(row==n-1  || Matrix[row+1][col]>0)
		        {
	             		dir=2;
	             		col--;
		         }else{
                        row++;;
		         }
     }else if(dir==2){
                 if(col==0  || Matrix[row][col-1]>0)
		        {
	             		dir=3;
	             		row--;
		         }else{
                      col--;
		         }
     }else{

           if(Matrix[row-1][col]>0)
		        {
	             		dir=0;
	             		col++;
		         }else{
                      row--;
		         }  


     }
       count++;
  }
   
for (int i = 0; i < n; i++)
   {
   	    for (int j = 0; j < n; j++)
   	    {   
   	    	if (i==0){
   	    	cout<<Matrix[i][j]<<"  ";
   	    }else{
   	    	cout<<Matrix[i][j]<<" ";
   	    }
   	    }
   	    cout<<endl;
   }


	return 0;
}