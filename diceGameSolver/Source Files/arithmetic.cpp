#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>


public arithmetic(int d6num1, int d6num2, int d6num3, int d12num1, int d12num2)
{
    int d6s[2] = {d6num1, d6num2, d6num3};
    std::sort (d6s,d6s+3);
 
  do {
    std::cout << d6s[0] << ' ' << d6s[1] << ' ' << d6s[2] << '\n';
  } while ( std::next_permutation(d6s,d6s+3) );
  return d6s;
}
