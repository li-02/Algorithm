#include <iostream>
using namespace std;

// Recursion
long long Fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

// non-Recursion
/**
 * @brief space cost O(n)
 *
 * @param n
 * @return long long*
 */
long long *Fibonacci2(int n)
{
    long long int num[n + 1];
    num[0] = 0;
    num[1] = 1;
    for (int i = 2; i < n; i++)
    {
        num[i] = num[i - 1] + num[i - 2];
    }
    return num;
}
/**
 * @brief space cost O(1)
 *
 * @return int
 */
long long int Fibonacci3(int n)
{
    long long int first = 0;
    long long int second = 1;
    long long int third = 0;
    for (int i = 2; i < n; i++)
    {
        third = first + second;
        first = second;
        second = third;
    }
    return third;
}