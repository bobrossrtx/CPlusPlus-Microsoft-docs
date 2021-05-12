// MathLib.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "MathLib.h"

// DLL internal state variables:
static unsigned long long previous_;	// previous value, if any
static unsigned long long current_;		// current sequence value
static unsigned index_;								// Current seq. position

/*
* Fibonacci
*/

/*
* Initialize a Fibinacci relation sequence
* such that F(0) = a, F(1) = b.
* This function must be called before any other function
*/
void fibonacci_init(
	const unsigned long long a,
	const unsigned long long b) 
{
	index_ = 0;
	current_ = a;
	previous_ = b; // see special case when initialized
}

/*
* Produce the next value in the sequence.
* Returns true on success, false on overflow.
*/
bool fibonacci_next()
{
	// check to see if we'd overlfow result or position
	if ((ULLONG_MAX - previous_ < current_) ||
			(UINT_MAX == index_))
	{
		return false;
	}

	// Special case when index == 0, just return b value
	if (index_ > 0) 
	{
		// otherwise, calculate next sequence value
		previous_ += current_;
	}
	std::swap(current_, previous_);
	++index_;
	return true;
}

// Get the current value in the sequence.
unsigned long long fibonacci_current()
{
	return current_;
}

// Get the current index position in the sequence.
unsigned fibonacci_index() {
	return index_;
}

/*
* Math
*/

/*
* Param: one - first integer input.
* Param: two - second integer input.
* Returns: one + two.
*/
int sumAdd_int(
	const int one, const int two)
{
	return one + two;
}

/*
* Param: one - first integer input.
* Param: two - second integer input.
* Returns: one - two.
*/
int sumSub_int(
	const int one, const int two)
{
	return one - two;
}

/*
* Param: one - first integer input.
* Param: two - second integer input.
* Returns: one / two.
*/
int sumDiv_int(
	const int one, const int two)
{
	return one / two;
}

/*
* Param: one - first integer input.
* Param: two - second integer input.
* Returns: one * two.
*/
int sumMult_int(
	const int one, const int two)
{
	return one * two;
}

/*
* Strings
*/

/*
* Concatonates strings together without spaces.
* Param: inStr0 - first input string.
* Param: inStr1 - second input string.
* Returns: outStr0 + outStr1; ("" + "")
*/
std::string concatStr(
	const char* inStr0, const char* inStr1)
{
	std::string outStr0(inStr0);
	std::string outStr1(inStr1);
	return outStr0 + outStr1;
}

/*
* Concatonates strings together with spaces.
* Param: inStr0 - first input string.
* Param: inStr1 - second input string.
* Returns: outStr0 + outStr1; ("" + " " + "")
*/
std::string concatStrSpc(
	const char* inStr0, const char* inStr1)
{
	std::string outStr0(inStr0);
	std::string outStr1(inStr1);
	return outStr0 + " " + outStr1;
}