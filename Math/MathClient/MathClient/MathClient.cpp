// MathClient.cpp : Client app for MathLib DLL.
#include <iostream>
#include "MathLib.h"

int main(int argc, char **argv) {
	// Initialize a Fibonacci relation sequence.
	fibonacci_init(1, 1);
	
	// Write out the sequence values until overflow.
	do {
		printf("%u: %lld\r\n", fibonacci_index(), fibonacci_current());
	} while (fibonacci_next());

	// Report count of values written before overflow.
	printf("%u Fibonacci sequence values fit in an unsigned 64-bit integer.\r\n", fibonacci_index() + 1);

	// Printing the sum of 5 + 6 using the sumAdd_int method
	printf("\r\nThe sum of 5 + 6 == %d\r\n", sumAdd_int(5, 6));

	//Concatinating the strings "", "" without spaces
	std::cout << concatStr("Hello", "World") << std::endl;

	//Concatinating the strings "", "" with spaces
	std::cout << concatStrSpc("Hello", "World") << std::endl;

	printf("Square root of 9 = %lf\r\n", squareRoot(9));
	printf("18 ^ 6 = %lf\r\n", expo(18, 6));
}
