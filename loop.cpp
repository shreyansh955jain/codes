#include<iostream>
using namespace std;
void showHElloworld(){
// void return type  funtion!
    cout<<"Shreyansh Jain,TMU 3rd year Passout!!"<<endl;
    //cout<<"basic step-4"<<endl;
}
int main()
{
    showHElloworld();  int sum = 0; int counter = 1;
   //st-1
   while(counter<=(10)){ sum=counter+sum; counter+=1;}
   cout<<"SUM[1, 10]:"<<sum<<endl;
   sum=0;//reinslized..
   
//st-2
    for(int i=0;i<=10;i++) {sum=i+sum;}
    cout<<"SUM[1, 10]:"<<sum<<endl;
//st-3
    int p,total=0;    
    for(int i=0;i<5;i++){
        cin>>p;   
        total=total+p;
    }
    cout<<"total="<<total<<endl;
//st-4
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < i; ++j)
    {
           cout<<"1 ";
    }
        cout<<endl;
    }

    return 0;
}