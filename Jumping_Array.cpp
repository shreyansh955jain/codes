#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
//brute force approach time complexity--->> is exponential
//optimize solution time complexity-->> is O(N).

//this is Also called a greedy Approach !!!!.

//v1::          |4|   |1|   |0|  |0|  |5|   |1|  |0|  |4|  |0|  |0|
//              | |   | |   | |  | |  | |   | |  | |  | |  | |  | |
//              | |   | |   | |  | |  | |   | |  | |  | |  | |  | |
//v2::          |4|   |3|   |2|  |1|  |5|   |4|  |3|  |4|  |3|  |2|
                                                  //max(2,4)
//answer yes we can out of loop 
//v2[n-1]>0------->yes
//TCx-->O(n)
//SCx-->O(n)                
int main(int argc, char const *argv[])
{
	int n ; cin>>n ; 
    std::vector<int> v1(n);
    std::vector<int> v2(v1.size(),0);
    for (int i = 0; i < v1.size(); i++)
    {
    	cin>>v1[i];
    }
    int maxi=v1[0];
    v2[0]=v1[0];
    for (int i=1; i<v1.size(); i++)
    {
          maxi= max(maxi-1,v1[i]);   
          v2[i]=maxi;       
    } 
    for (int i = 0; i<v1.size(); i++)
    {
    	cout<<v2[i]<<",";
    	/* code */
    }
    cout<<endl
 ;   if (v2[v2.size()-1]>0){
    	cout<<"YEs can out from array"<<endl;
    }else{
        cout<<"NO can't out from array"<<endl;
    }
	return 0;
}

