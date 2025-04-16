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
    if(cin.fail() || n < 0)
      cout << "\033[31m<Input is invalid, please try again>\033[0m" << endl;
    if(cin.fail()){
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Give me a positive integer or 0 to exit: ";
    cin >> noskipws >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(!cin.fail() && n > 0){
      if(n == 1)
        cout << "\033[31m1 is NOT a prime number.\033[0m" << endl;
      else if(n == 2 || n == 3)
        cout << "\033[32m" << n << " is a prime number.\033[0m" << endl;
      else {
        for(int i=2; i<n; i++){
          if(n % i == 0){
            c++;
            if(c == 3) {
              cout << "\033[31m" << n << " is NOT a prime number.\033[0m" << endl;
              cout << "Divisors of " << n << ":" << endl;
              cout << "\t\033[3m1, " << i << ", ";
            } else
              cout << i << ", ";
          }
        }
        if(c>2)
          cout << n << "\033[0m" << endl;
        else
          cout << "\033[32m" << n << " is a prime number.\033[0m" << endl;
      }
    } else if(cin.fail()){
      n = 10;
    }
    cout << endl << "---------------------------------" << endl;
  } while( n != 0 );

  return EXIT_SUCCESS;
}
