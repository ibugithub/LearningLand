#include <iostream>
#include <cmath>
using namespace std;


// some formula .....

// (a + b) % m = a % m + b % m
// (a - b) % m = a % m - b % m
// (a * b) % m = (a % m * b % m) % m
// if b is even ==> a ^ b = (a ^ b/2) ^ 2
// if b is odd ==> a ^ b = (a ^ b/2) ^ 2 * a


// int modularExponentiation(int x, int n, int m) {
// 	int sum = 1;
// 	for(int i = 0; i < n / 2; i ++)
// 	{	
// 		sum = 1LL *(sum) * (x);
// 	} 
// 	int result = 1LL * ((sum) % m * (sum) % m) % m;
// 	if( n & 1)
// 	{
// 		result = 1LL * (result) * (x) % m;
// 	}
// 	return result;
// }

// int main() 
// {
//     cout << modularExponentiation(5, 125, 7);
// } 






int modularExponentiation(int x, int n, int m) {
	int sum = 1;
	while(n > 0) 
	{
		if(n&1)
		{sum = (1LL * (sum) % m * (x) % m) % m;}
		x = (1LL * (x) % m * (x) % m) % m;
		n = n >> 1;
	}
	return sum;
}

int main() 
{
    cout << modularExponentiation(5, 125, 7);
}




