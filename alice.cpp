// C++ program for above approach
#include <iostream>
using namespace std;

// Function to predict the winner
void predictTheWinner(int K, int N)
{

	if (N % (K + 1) == 0)
		cout << "Bob";
	else
		cout << "Alice";
}

// Driver Code
int main()
{

	// Given Input
	int K =10; 
	int  N = 100;
	// Function call
	predictTheWinner(K, N);

	return 0;
}
