//basic st-7
#include<bits/stdc++.h>
using namespace std;
void even_number(int n){

if(n>0){
	cout<<n<<endl;
	even_number(n-2);
}
}
int main(){
cout<<"Shreyansh Jain,TMU 3rd year Passout!!"<<endl;
int n=10;
cout<<"print All even number[10,1]::"<<endl;
 even_number(10);
 return 0;
}