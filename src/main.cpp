/* ****************************************************************
 * @author: Jephthah M. Orobia
 * @app name: Names
 * @app desc: Greeting names from the array.
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main()
{
  // ************************** TO DO **************************
  // Place your code logic after this comment line
  // ***********************************************************
  string names[50] = { "Liam", "Olivia", "Noah", "Emma", "Oliver", "Ava", "William", "Sophia", "Elijah", "Isabella", "James", "Mia", "Benjamin", "Amelia", "Lucas", "Harper", "Mason", "Evelyn", "Ethan", "Abigail", "Alexander", "Ella", "Henry", "Lily", "Jacob", "Aria", "Michael", "Avery", "Daniel", "Sofia", "Logan", "Camila", "Jackson", "Scarlett", "Sebastian", "Victoria", "Jack", "Madison", "Aiden", "Luna", "Owen", "Grace", "Samuel", "Chloe", "Matthew", "Penelope", "Joseph", "Layla", "Levi", "Riley"};

  for(string name:names)
    cout << "Hello "<< name <<"!" << endl;

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();
  return EXIT_SUCCESS;
}
