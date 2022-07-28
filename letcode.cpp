#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int len =nums.size();  
      int sum=0 ,max=INT_MIN;
     for(int i=0;i<len;i++){
       sum=sum+nums[i];
       if(len==1 && sum<0){ 
                return nums[0];     
                }
            if(sum<0){
                sum=0;
            }else{
                if(max<sum){
                   max=sum;
               }
            }   
      }
       return max; 
    }
};
int main(){
vector<int>v1{-1};
Solution obj;
cout<<obj.maxSubArray(v1);

}