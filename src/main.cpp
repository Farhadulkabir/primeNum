#include "isPrime.h"
#include "primeIO.h"
#include <iostream>
int main() {
  int choice;
  std::cout
      << "##Choose an option##\n\n1|Check if 'x' is prime\n2|Print the n-th "
         "prime number\n3|Print print all prime numbers till the number "
         "'n'\n4|Print "
         "the first 'n' number of prime numbers\n";
  std::cin >> choice;
  switch (choice) {
  case 1:
    unsigned long long x;
    std::cout << "\nEnter the value of 'x': ";
    std::cin >> x;
    if (isPrime(x))
      std::cout << "The number " << x << " is prime\n";
    else
      std::cout << "The number " << x << " is not a prime\n";
    break;
  case 2:
    printnthPrime();
    break;
  case 3:
    printPrimeTilln();
    break;
  case 4:
    printFirstnPrimes();
    break;
  default:
    std::cout << "\nInvalid input try again\n";
  }
}
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
