#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b){return a+b;}
int sum(int a,int b,int c) {int ans=sum(a,b);return sum(ans,c);}
bool isprime(int n){
   if(n<2){return false;}
   for (int i = 2; i <=sqrt(n); i++)
   {
        if(n%i==0){return false;}
   }
return true;

}

void printStar(int n){

for (int i = 1; i <=n; i++)
{
    for (int j= 1; j<=i; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}


}
int  main()
{

    cout<<"Shreyansh Jain,TMU 3rd year Passout!!"<<endl;
    int ans=sum(5,6);//=11 mapping  at run time just by checking no of arug and their type!
    cout<<ans<<endl;  ans=0;
    ans=sum(7,4,2);//13

    
    cout<<ans<<endl;
    int counter=0;
    cout<<"###pirme number#####"<<endl;
    for (int i = 2; i <=30 ; i++)
    {    
        if(isprime(i)){
            cout<<i<<endl;
            counter++;
        }
    }

    printStar(5);

    cout<<"total no of prime b/t 1 to 30:"<<counter<<endl;

}