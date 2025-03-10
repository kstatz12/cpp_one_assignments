#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"

long fibonacci(const int n)
{
    int term_1 = 0, term_2 = 1;
    int nth_term = 0;

    if (n == 1) {
        return term_1;
    }
    if (n == 2) {
        return term_2;
    }

    for (int i = 3; i <= n; i++) {
        nth_term = term_1 + term_2;
        term_1 = term_2;
        term_2 = nth_term;
    }
    return nth_term;
}

int linear_search(Array * a, const int target)
{
    return 0;
}

long factorial(const int n)
{
    return 0;
}

#endif // ALGO_H_
