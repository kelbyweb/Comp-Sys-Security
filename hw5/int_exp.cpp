//
//  int_exp.cpp
//  hw5_3b
//  By: Kelby Webster
//
#include <iostream>
using namespace std;

int dexp(unsigned int base, unsigned int exponent, unsigned int modulus) {
    base %= modulus;
    unsigned int result = 1;
    
      while(exponent > 0) {
          if(exponent & 1) {
              result = (result * base) % modulus; // multiplying with base
           }
          base = (base * base) % modulus; // squaring the base
          exponent >>=1;
      }
      return result;
  }

int main() {
    // define variables
    int a, b, n = 0;
    
    // get user input
    cout << "********************************************************" << endl;
    cout << "\nWelcome to the integer exponentiation calculator program!" << endl;
    cout << "The law is as follows: (a*b)%n = ((a%n)(b%n))%n " << endl;
    cout << "\n********************************************************" << endl;
    cout << "\nBase-- Enter value for a: ";
    cin >> a;
    cout << "\nExponent-- Enter value for b: ";
    cin >> b;
    cout << "\nModulus-- Enter value for n: ";
    cin >> n;
    
    // calculate & print results
    int printResult = dexp(a, b, n);
    cout << "*********************************" << endl;
    cout << "\n(" << a << "*" << b << ")%" << n << " = (("
    << a << "%" << n << ")(" << b << "%" << n << "))%" << n
    << "\n\nThe result is: " << printResult << "\n" << endl;

    return 0;
}





