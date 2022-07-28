#include<iostream>
#include<bits/stdc++.h>
using namespace std;
float mySqrt(int x,int precision) {
        int start=0,end =x;
        float ans=0; long mid,mul;
        while(start<=end){
            /*this line usefull because its makes your mid in positive otherwise in some you may get overflow.*/
            mid = start + (end - start)/2;
            mul = mid*mid;
            if(mul==x){
                ans=mid;
                break;
            }
            else if(mul>x){
                end=mid-1;
            }else{
                start=mid+1;
                ans=mid;                
            }
        }

         //now for fracition part solve!!
         float j=0.1;
         for(int i = 0; i < precision; i++)
          {
             while(ans*ans<=x){
                 ans=ans+j;
                 //cout<<ans<<endl;
             }
             //ans>x
             ans=ans-j;
             //cout<<ans<<endl;
             j=j/10;
         }
        //cout<<ans<<endl;
        return ans;  
    }
//##############################################################
int main(){
cout<<mySqrt(10,3);
}