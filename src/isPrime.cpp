
#pragma once
#include "isPrime.h"
bool isPrime(unsigned long long x) {
  if (x % 2 == 0)
    return 0;
  for (int i = 3; i <= x / 2; i = i + 2) {
    if (x % i == 0)
      return 0;
  }
  return 1;
}
