#!/usr/bin/python

# see https://gertingold.github.io/pythonnawi/profiling.html on how to measure runtime

import time
from typing import Dict

# returns the n-th-fibonacci number whereas n is the parameter starting with 0 
def fib(n: int) -> int:
    if n < 2:
        # Abbruchbedingung
        return n

    # Rekursion
    return fib(n-2) + fib(n-1)

# this is our Memoisation dictionary already containg Fibonacci numbers for 0 and 1 
memo: Dict[int, int] = {0: 0, 1: 1}
def fibmemo(n: int) -> int:
    if n not in memo:
        memo[n] = fibmemo(n-2) + fibmemo(n-1)
    return memo[n]

if __name__ == '__main__':
    print("Hello World")

    start = time.time()
    print(fib(0))
    print(fib(25))
    end = time.time()
    print('{:5.4f}s'.format(end-start))

    start = time.time()
    print(fibmemo(0))
    print(fibmemo(25))
    end = time.time()
    print('{:5.4f}s'.format(end-start))
