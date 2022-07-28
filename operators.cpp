#include<iostream>
using namespace std;
void showHElloworld(){
// void return type  funtion!
	cout<<"helloworld"<<endl;
    cout<<"Shreyansh Jain,TMU 3rd year Passout!!"<<endl;
}


int main()
{   showHElloworld();
    int a=15;
    int b=10;
    cout<<"sum:"<<a+b<<endl;
    cout<<"reminder:"<<a%b<<endl;
    cout<<"mul:"<<a*b<<endl;
    cout<<"div:"<<a/b<<endl;
    cout<<"sub:"<<a-b<<endl;
    cout<<"post increment  of a "<<(a++)<<endl;  //print a=15 but update a=16
    cout<<"pre increment as  :"<<(++a);//as a=16 now print and update =17
    //a=a++ + ++a; cout<<a<<endl;
    //10 + 12 =22  
    cout<<"post decrement  of a "<<(a--)<<endl;  //print a=17 but update a=16
    cout<<"pre decrement as  :"<<(--a)<<endl;//as a=16 now print and update =15
    
   //st-2
   bool checkvalue=(a>b);
   cout<<"checkvalue:"<<checkvalue;
	return 0;
}


