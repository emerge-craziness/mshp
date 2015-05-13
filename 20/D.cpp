/* Copyright 2015, by Pikulin Ilya */
#include <cstdio>
using namespace std;

//#define DEBUGGING

int main( int argc, char** argv )
{
    int N;
    scanf( "%i", &N );
    
    for ( int i = 0; i * 10 <= N; i++ )
    {
        for ( int j = 0; j * 5 <= N - i * 10; j++ )
        {
            for ( int k = 0; k * 2 <= N - i * 10 - j * 5; k++ )
            {
                int l = N - i * 10 - j * 5 - k * 2;
                
                printf( "%i tens %i fives %i twos %i ones\n", i, j, k, l );
            }
        }
    }
    
    return 0;
}

