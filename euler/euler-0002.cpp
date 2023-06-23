// ////////////////////////////////////////////////////////
// # Title
// Even Fibonacci numbers
//
// # URL
// https://projecteuler.net/problem=2
// http://euler.stephan-brumme.com/2/
//
// # Problem
// Each new term in the Fibonacci sequence is generated by adding the previous two terms.
// By starting with 1 and 2, the first 10 terms will be:
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms in the Fibonacci sequence whose values do not exceed four million,
// find the sum of the even-valued terms.
//
// # Solved by
// Stephan Brumme
// February 2017
//
// # Algorithm
// As explained in the problem statement, you can compute all Fibonacci numbers in an iterative way:
// `F_i=F_{i-2}+F_{i-1}`
//
// My variables ''a'' and ''b'' stand for `F_{i-2}` and `F_{i-1}` whereas ''next'' is `F_i`
// After each iteration, ''next=a+b'' and then ''a'' becomes ''b'' and ''b'' becomes ''next''.
//
// A number is even if there is no remainder when divided by 2.
// In most programming languages it's written as ''variable % 2 == 0''
//
// Internally, your compiler might translate this to the more efficient ''(variable & 1) == 0''
//
// # Note
// ''unsigned long long'' is required to pass all Hackerrank tests.

#include <iostream>

int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned long long last;
    std::cin >> last;

    unsigned long long sum = 0;
    // first Fibonacci numbers
    unsigned long long a = 1;
    unsigned long long b = 2;

    // until we reach the limit
    while (b <= last)
    {
      // even ?
      if (b % 2 == 0)
        sum += b;

      // next Fibonacci number
      auto next = a + b;
      a = b;
      b = next;
    }

    std::cout << sum << std::endl;
  }
  return 0;
}
