/* ****************************************************************
 * @author: Jephthah M. Orobia
 * @app name: Prime Sieve
 * @app desc: Determines if a number is a prime number or not.
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <limits>

using namespace std;

int main()
{
  int n = 10;
  do {
    
    int c = 2; // represents the number of divisors of `n`

    /* Prompt user for a valid input */
    cout << "A positive integer or 0 to exit: ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if(!cin.fail() && n > 0){ // validates input
      /* Sieve the number if input is valid */
      if(n == 1) // special number
        cout << "\033[31m1 is NOT a prime number.\033[0m" << endl;
      else if(n == 2 || n == 3) // first two primes
        cout << "\033[32m" << n << " is a prime number.\033[0m" << endl;
      else {
        for(int i=2; i<n; i++){
          if(n % i == 0){ // if n is divisible by i
            c++; // increment divisors count
            if(c == 3) { // if this is the first divisor
              /* Prompt user that this number is not a prime number */
              cout << "\033[31m" << n
                   << " is NOT a prime number.\033[0m" << endl;
              /* Print the list of divisors starting this divisor*/
              cout << "Divisors of " << n << ":" << endl;
              cout << "\t\033[3m1, " << i << ", ";
            } else // for other divisor
              cout << i << ", "; // print divisor
          }
        }

        if(c>2) // not a prime
          cout << n << "\033[0m" << endl; // print the number as the last divisor
        else // the number is prime then prompt user that the number is a prime number
          cout << "\033[32m" << n << " is a prime number.\033[0m" << endl;
      }

      /* Decoration to separate each sieving */
      cout << endl << "---------------------------------" << endl;

    /* Handle User Input Errors */
    } else if(cin.fail() || n < 0)
      cout << "\033[31m<Input is invalid, please try again>\033[0m" << endl;
      if(cin.fail()){
        n = 10; // reset variable, also to make sure program doesn't terminate
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

  } while( n != 0 );

  return EXIT_SUCCESS;
}
