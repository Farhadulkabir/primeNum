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
