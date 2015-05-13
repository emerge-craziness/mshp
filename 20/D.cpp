/* Copyright 2015 by Pikulin Ilya */
#include <iostream>
#include <cstdio>
using namespace std;

//#define DEBUGGING

int main( int argc, char** argv )
{
    int N;
    cin >> N;
    
    int local[4];
    
    int counter = 0;
    for ( int i = 0; i * 10 <= N; i++ )
    {
#ifdef DEBUGGING
                fprintf( stderr, "%s: line %i ok\n", __FILE__, __LINE__ );
                fflush( stderr );
#endif
        for ( int j = 0; j * 5 <= N - i * 10; j++ )
        {
#ifdef DEBUGGING
                fprintf( stderr, "%s: line %i ok\n", __FILE__, __LINE__ );
                fflush( stderr );
#endif
            for ( int k = 0; k * 2 <= N - i * 10 - j * 5; k++ )
            {
                int l = N - i * 10 - j * 5 - k * 2;
                
                printf( "%i tens %i fives %i twos %i ones\n", i, j, k, l );
#ifdef DEBUGGING
                fprintf( stderr, "%s: line %i ok\n", __FILE__, __LINE__ );
                fflush( stderr );
#endif
#ifdef DEBUGGING
                fprintf( stderr, "%s: line %i ok\n", __FILE__, __LINE__ );
                fflush( stderr );
#endif
                
            }
        }
    }
    
    return 0;
}




/*
    printf( "%i tens %i fives %i twos %i ones\n", 0, 0, 0, N / 1 );
*/
