#include "primeIO.h"
#include "isPrime.h"
#include <iostream>

void printPrimeTilln() {
  unsigned long long n;
  std::cout << "\nEnter the value of n: ";
  std::cin >> n;
  std::cout << "All the prime numbers until " << n << " are:\n" << "2\n";
  for (unsigned long long i = 3; n >= i; i = i + 2) {
    if (isPrime(i))
      std::cout << i << '\n';
  }
}

void printnthPrime() {
  int primeCount = 1;
  unsigned long long x;
  unsigned long long n;
  std::cout << "\nEnter the value of n: ";
  std::cin >> n;
  for (unsigned long long i = 3; n > primeCount; i = i + 2) {
    if (isPrime(i)) {
      primeCount++;
    }
    x = i;
  }
  std::cout << "the " << n << "-th prime number is " << x << '\n';
}

void printFirstnPrimes() {
  int primeCount = 1;
  unsigned long long x;
  unsigned long long n;
  std::cout << "\nEnter the value of n: ";
  std::cin >> n;
  std::cout << "The first " << n << " prime numbers are:\n" << "2\n";
  for (unsigned long long i = 3; n > primeCount; i = i + 2) {
    if (isPrime(i)) {
      std::cout << i << '\n';
      primeCount++;
    }
    x = i;
  }
}
