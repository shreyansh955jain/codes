#include<iostream>
#include<stack>
using namespace std;
int mySqrt(int x) {
        if(x < 2)
             return x;
        long start = 1;
        long end = x/2;
        while(start <= end) {
            long mid = start + (end - start)/2;
            long prod = mid*mid;
            if(prod == x)
                return mid;
            else if(prod < x){
                start = mid+1;
            }
            else {
                end = mid - 1;
            }   
        }
        return end;
    }
int main(int argc, char const *argv[])
{
	mySqrt(10);
	return 0;
}
