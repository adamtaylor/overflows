#include <stdio.h>
struct S {
             int i;
             char cc;
             float f;
             char c;
             struct  S * fr ;
             char d;
};

int main ( ) 
{
     printf("\n char:  %d bytes",sizeof( char ));
     printf("\n short:  %d bytes",sizeof( short ));
     printf("\n ushort:  %d bytes",sizeof( unsigned short ));
     printf("\n int:  %d bytes",sizeof( int ));
     printf("\n uint:  %d bytes",sizeof( unsigned int ));
     printf("\n long:  %d bytes",sizeof( long ));
     printf("\n ulong:  %d bytes",sizeof( unsigned long ));
     printf("\n llong:  %d bytes",sizeof( long long ));
     printf("\n ullong:  %d bytes",sizeof( unsigned long long ));
     printf("\n float:  %d bytes",sizeof( float ));
     printf("\n double:  %d bytes",sizeof( double ));
     printf("\n S *:  %d bytes",sizeof( struct S * ));
     printf("\n S:  %d bytes",sizeof( struct S  ));
     printf("\n");
}
