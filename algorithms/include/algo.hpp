#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"

long fibonacci(const int n)
{
    int num1 = 0;
    int num2 = 1;
    int num3 = 2;
    for(int i = 0; i < n; i++) 
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
    return num3;
}

int linear_search(Array * a, const int target)
{
    int idx = 0;
    int curr = 0;
    while (curr != target || idx != a->len)
    {
        curr = a->data[idx];
        idx++;
    }
    if (curr = target) 
    {
        return idx - 1;
    }
    return -1;

}

long factorial(const int n)
{
    int sum = 0;
    for (int i = n; i > 0; i--) 
    {
        sum = sum * n;
    }
    return sum;
}

#endif // ALGO_H_
