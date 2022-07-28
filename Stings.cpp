#include<iostream>
#include<cstring>
#include <string>
using namespace std;
int main(){

cout<<"Shreyansh Jain,TMU 3rd year Passout!!"<<endl;
cout<<endl;
cout<<"## c Sytle string!###"<<endl;
cout<<endl;
char str1[]="hello world";
char str2[]={' ','c','+','+','\0'};
char temp[100];
cout<<"copy of str1 to temp:   "<<strcpy(temp,str1)<<endl;
cout<<"length of string:       "<<strlen(temp)<<endl;
cout<<"concatinate string:     "<<strcat(str1,str2)<<endl;
//str1==str2  ---> output zero!
//str1>str2  ---> output any Positive!
//str1<str2  ---> output any negative!
cout<<"compair_result:         "<<strcmp(str1,str2);
cout<<endl;
cout<<"==========c++ Sytle string!=========="<<endl;
cout<<endl;
string s1="shreyansh ";
string s2="jain";
cout<<"concatate s1 tos2: "<<s1+s2<<endl;
cout<<"length of string:  "<<s1.size()<<endl;
cout<<"compair:           "<<(s1=s1);



}