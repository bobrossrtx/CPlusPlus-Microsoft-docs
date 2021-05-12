// MathLib.h - Conatins declaration of math functions
#pragma once

#ifdef MATHLIB_EXPORTS
#define MATHLIB_API __declspec(dllexport)
#else
#define MATHLIB_API __declspec(dllimport)
#endif


/*
* Fibonacci
*/

/*
* The Fibonacci recurrence relation describes a sequence of F
* where F(n) is { n = 0, a
*								{ n = 1, b
*								{ n > 1, F(n-2) + F(n-1)
* for some initial integral values a and b.
* If the sequence is initialized F(0) = 1, F(1) = 1,
* then this relation produces the well-known Fibonacci
* sequence: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
*/

/*
* Initialize a Fibonacci relation sequence
* such that F(0) = a, F(1) = b.
* This function must be called before any other function.
*/
extern "C" MATHLIB_API void fibonacci_init(
	const unsigned long long a, const unsigned long long b);

/*
* Produce the next value in the sequence,
* Returns true on success and updates current value and index;
* false on overflow, leaves current value and index unchanged.
*/
extern "C" MATHLIB_API bool fibonacci_next();

// Get the current value in the sequence.
extern "C" MATHLIB_API unsigned long long fibonacci_current();

// Get the position of the current value in the sequence.
extern "C" MATHLIB_API unsigned fibonacci_index();

/*
* Math
*/

/*
* Param: one - first integer input.
* Param: two - second integer input.
* Returns: one + two.
*/
extern "C" MATHLIB_API int sumAdd_int(
	const int one, const int two);

/*
* Param: one - first integer input.
* Param: two - second integer input.
* Returns: one - two.
*/
extern "C" MATHLIB_API int sumSub_int(
	const int one, const int two);

/*
* Param: one - first integer input.
* Param: two - second integer input.
* Returns: one / two.
*/
extern "C" MATHLIB_API int sumDiv_int(
	const int one, const int two);

/*
* Param: one - first integer input.
* Param: two - second integer input.
* Returns: one / two.
*/
extern "C" MATHLIB_API int sumMult_int(
	const int one, const int two);

/*
* Strings
*/

#include <iostream>

/*
* Concatonates strings together without spaces.
* Param: inStr0 - first input string.
* Param: inStr1 - second input string.
* Returns: outStr0 + outStr1; ("" + "")
*/
extern "C" MATHLIB_API std::string concatStr(
	const char* inStr0, const char* inStr1);

/*
* Concatonates strings together with spaces.
* Param: inStr0 - first input string.
* Param: inStr1 - second input string.
* Returns: outStr; ("", "")
*/
extern "C" MATHLIB_API std::string concatStrSpc(
	const char* inStr0, const char* inStr1);