#include <climits>
#include <math>
#include <iostream>

using namespace std; 

int main ( int argc , char * argv[])
{
  cout.precision(10); 
  cout.setf(ios::fixed | ios::showpoint);

 
  cout << "FLT_MAX      " << FLT_MAX   << endl ;
  cout << "FLT_MAX +1 = " << FLT_MAX +1.0  << endl ;
  cout << "FLT_MAX -1 = " <<    FLT_MAX -1.0  << endl ;
 
  cout.precision(50); 

  cout << "1/FLT_MAX    " << 1.0/ FLT_MAX   << endl ;
  cout << "1+ 1/FLT_MAX " << 1.0+ 1.0/ FLT_MAX   << endl ; 
  cout << "FLT_MAX /FLT_MAX        " << FLT_MAX /FLT_MAX << endl ;
  cout << "(FLT_MAX +1) /FLT_MAX   " <<(FLT_MAX +1.0) /FLT_MAX << endl;
  cout << "(FLT_MAX -1) /FLT_MAX   " << (FLT_MAX -1.0) /FLT_MAX  <<endl;
  cout << "FLT_MAX /(FLT_MAX +1)   " << FLT_MAX  /(FLT_MAX+1.0)  <<endl;
  cout << "FLT_MAX /(FLT_MAX -1)   "<< FLT_MAX  /(FLT_MAX -1.0)  <<endl;
}