/* ****************************************************************
 * @author: Jephthah M. Orobia
 * @app name: Countdown
 * @app desc: Countdown from a specified number.
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#define NOMINMAX
#include <limits>
#include <windows.h>

using namespace std;

int main()
{
  int n = 10;

  do {
    system("clear");
    if(cin.fail() || n < 0)
      cout << "\033[31m<Input is invalid, please try again>\033[0m" << endl;
    if(cin.fail()){
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Start from (seconds or 0 to exit): ";
    cin >> noskipws >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(!cin.fail() && n > 0){
      for(int i = n; i >= 0; i--){
        system("clear");
        cout << i;
        Sleep(1000);
      }
    } else if(cin.fail()){
      n = 10;
    }
  } while( n != 0 );

  return EXIT_SUCCESS;
}
