// math.cppm

// this is our module declaration
export module math;

// now implement math functions 

// greatest common divisor
export int gcd(int first, int second)
{
   // using the Euclidean algorithm
   return second == 0 ? first : gcd(second, first % second);
} 

// least common multiple
export int lcm(int first, int second)
{
   int div = gcd(first, second); 
   return div ? (first * (second / div)) : 0;
}
