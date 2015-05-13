/* Copyright 2015, by Pikulin Ilya */
#include <cstdio>

//#define DEBUGGING

using namespace std;

int main( int argc, char** argv )
{
    int N;
    scanf( "%i", &N );

    switch ( N )
    {
        case 1:
        case 2:
            printf( "0\n" );
            return 0;
        case 3:
            printf( "1\n" );
            return 0;
    }

    int pprev = 0,
        prev = 1;
    int curr = pprev + prev + ( curr = 0 );
    for ( int i = 3; i < N; i++ )
    {
        // curr = ( prev = curr ) + ( pprev = prev ) + pprev; // why doesn't work?
        int temp = curr;
        curr = pprev + prev + curr;
        pprev = prev;
        prev = temp;
    }
    printf( "%i\n", curr );

    return 0;
}
