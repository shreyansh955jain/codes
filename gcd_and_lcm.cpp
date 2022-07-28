//C++ program to find LCM of two numbers
#include <iostream>
using namespace std;

// Recursive function to return gcd of a and b
long long Euclid_gcd_alogrithm(long long int a, long long int b)
{
if (b == 0)
    return a;
return Euclid_gcd_alogrithm(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a* b) / Euclid_gcd_alogrithm(a, b) ;
}

// Driver program to test above function
int main()
{
    int a = 15, b = 20;
    cout <<"LCM of " << a << " and "
        << b << " is " << lcm(a, b);
    return 0;
}
