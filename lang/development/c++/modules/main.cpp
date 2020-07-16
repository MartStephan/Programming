// main.cpp
#include "stdio.h"

// Our first C++20 module - of course a math module
import math;

int main()
{   
   // call greatest common divisor from math module
   int res = gcd(2000, 20);
   printf("gcd %d\n", res);
   
   // call least common multiple from math module
   res = lcm(10, 100);
   printf("lcm %d", res);
}
