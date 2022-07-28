// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[9]={2,4,-8,9,10,-2,4,-20,10};
// int length =sizeof(arr)/sizeof(arr[0]);
// int answer=INT_MIN ;
// int sum=0;
// for (int i = 0; i <length ; i++)
// {       sum=sum+arr[i];
//        if((sum<0)){
//          sum=0;
//        }else{
//           if (answer<sum)
//           {
//             answer=sum;
//           }
       
//           }
//       } 
// cout<<"Shreyansh Jain"<<endl;
// cout<<endl;
// cout<<"The maximum Sub Array was :: "<<answer<<endl;
// cout<<endl;
// cout<<"KADANE'S_ALGORITHM"<<endl;

//   }

// bits stuffing pprograme in c.


#include<stdio.h>
#include<string.h>
int main()
{
    int a[20],b[30],i=0,n;
    printf("Enter frame size (Example: 8):");
    scanf("%d",&n);
    printf("Enter the frame in the form of 0 and 1 :");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);   
    }
    i=0;
    int j=0;
    int count=0;
    while(i<n)
    {    b[j]=a[i];
         
        if(i==0 && a[i]==1)
          count++; 
        if(a[i-1]==1&&a[i]==1 &&i>0)
        {
          count++;
        }else{
          count=0;

        }
        printf("count %d",count);
        if(count==5 && count!=0){
          b[j]=0;
          count=0;
          i--;
        }
        i++;
        j++;
    }
    int size=sizeof(b)/sizeof(int);
    printf("After Bit Stuffing :");
    for(int i=0; i<12; i++){
    printf("%d ",b[i]);  
    }
    return 0;
}


// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// void main() {
//   int i, j,count=0,nl;
//   char str[100];
//   clrscr();
//   printf("enter the bit string:  ");
//   gets(str);
//   for (i=0;i<strlen(str);i++) {
//     count=0;
//     //the following code search the six ones in given string
//     for (j=i;j<=(i+5);j++) {
//       if(str[j]=='1') {
//         count++;
//       }
//     }
//     //if there is six ones then folling code execute to bit stuffing after five ones
//     if(count==6) {
//       nl=strlen(str)+2;
//       for (;nl>=(i+5);nl--) {
//         str[nl]=str[nl-1];
//       }
//       str[i+5]='0';
//       i=i+7;
//     }
//   }
//   puts(str);
//   getch();
// }
