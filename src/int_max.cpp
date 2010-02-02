#include <climits>
#include <iostream>

using namespace std; 

int main ( int argc , char * argv[])

{
 
  cout << "INT_MAX      " << INT_MAX   << endl ;
  cout << "INT_MAX +1 = " << INT_MAX + 1  << endl ;
  cout << "INT_MAX -1 = " << INT_MAX - 1 << endl ;
 
  cout << "INT_MAX / INT_MAX        " << INT_MAX /INT_MAX << endl ;
  cout << "(INT_MAX +1) / INT_MAX   " << (INT_MAX +1) /INT_MAX << endl;
  cout << "(INT_MAX -1) / INT_MAX   " << (INT_MAX -1) /INT_MAX  <<endl;
  cout << "INT_MAX / (INT_MAX +1)   " << INT_MAX  /(INT_MAX+1)  <<endl;
  cout << "INT_MAX / (INT_MAX -1)   " << INT_MAX  /(INT_MAX -1)  <<endl;

}
