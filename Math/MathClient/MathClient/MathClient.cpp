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
	printf("%u Fibonacci sequence values fit in an unsigned 64-bit integer.", fibonacci_index() + 1);
}
