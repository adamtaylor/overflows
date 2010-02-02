#include <stdio.h>
#include <cmath>
#include <cfloat>

using namespace std; 

int main ( int argc , char * argv[])  {
  printf("DBL_EPSILON            %0.24f\n", DBL_EPSILON   ) ;
  printf("1+DBL_EPSILON          %24.40f\n", 1.0+DBL_EPSILON   ) ;
  printf("1/(1/(DBL_EPSILON +1)) %24.40f\n", 1.0/ (1.0/ (DBL_EPSILON +1 ))  ) ;
  printf("1/DBL_EPSILON %24.24f\n", 1.0/ DBL_EPSILON   ) ;
  printf("1/DBL_EPSILON +1.0 %24.24f\n", 1.0/ DBL_EPSILON +1.0  ) ;
  printf("1/(DBL_EPSILON +1) %24.24f\n", 1.0/ (DBL_EPSILON +1 )  ) ;
  printf("DBL_MIN           %0.51f\n", DBL_MIN   ) ;
  printf("DBL_MIN - 5.0e-46 %0.51f\n", DBL_MIN - 5.0e-46   ) ;
  printf("DBL_MIN - 1.0e-46 %0.51f\n", DBL_MIN - 1.0e-46   ) ;
  printf("DBL_MIN - 1.0e-47 %0.51f\n", DBL_MIN - 1.0e-47   ) ;
  printf("DBL_MIN - 1.0e-48 %0.51f\n", DBL_MIN - 1.0e-48   ) ;
  printf("DBL_MIN - 1.0e-49 %0.51f\n", DBL_MIN - 1.0e-49   ) ;
  printf("DBL_MIN - 1.0e-50 %0.51f\n", DBL_MIN - 1.0e-50   ) ;
  printf("DBL_MIN - 1.0e-51 %0.51f\n", DBL_MIN - 1.0e-51   ) ;
  printf("1+DBL_MIN         %24.51f\n", 1.0+DBL_MIN   ) ;
  printf("1/(DBL_MIN +1) %24.46f\n", 1.0/ (DBL_MIN +1.0 )  ) ;
  printf("1/(DBL_MIN -1) %24.46f\n", 1.0/ (DBL_MIN -1.0 )  ) ;
  printf("1/DBL_MIN      %24.4f\n", 1.0/ DBL_MIN   ) ;
  printf("1/(DBL_MIN) +1 %24.4f\n", 1.0/ (DBL_MIN) +1.0  ) ;
  printf("1/(DBL_MIN) -1 %24.4f\n", 1.0/ (DBL_MIN) -1.0  ) ;
  printf("DBL_MAX     %f\n", DBL_MAX   ) ;
  printf("DBL_MAX  +1 %f\n", DBL_MAX +1.0  ) ;
  printf("DBL_MAX  -1 %f\n", DBL_MAX -1.0  ) ;
  printf("1/DBL_MAX    %24.46f\n",1.0/ DBL_MAX   ) ;
  printf("1+ 1/DBL_MAX %24.46f\n",1.0+ 1.0/ DBL_MAX   ) ;
  printf("DBL_MAX /DBL_MAX      %24.24f \n",DBL_MAX /DBL_MAX);
  printf("(DBL_MAX +1) /DBL_MAX %24.24f \n",(DBL_MAX +1.0) /DBL_MAX);
  printf("(DBL_MAX -1) /DBL_MAX %24.24f \n",(DBL_MAX -1.0) /DBL_MAX);
  printf("DBL_MAX /(DBL_MAX +1) %24.24f \n",DBL_MAX  /(DBL_MAX+1.0));
  printf("DBL_MAX /(DBL_MAX -1) %24.24f \n",DBL_MAX  /(DBL_MAX -1.0));
}