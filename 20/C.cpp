/* Copyright 2015, by Pikulin Ilya */
#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;

//#define DEBUGGING

int main( int argc, char* argv[] )
{
    unsigned int N;
    cin >> N;
    vector< unsigned int >& prime_integers = *(new vector< unsigned int >);
    prime_integers.reserve( 20 );
#ifdef DEBUGGING
    fprintf( stderr, "%s: line %i ok\n", __FILE__, __LINE__ );
    fflush( stderr );
#endif
    prime_integers.push_back( 2 );
#ifdef DEBUGGING
    fprintf( stderr, "%s: line %i ok\n", __FILE__, __LINE__ );
    fflush( stderr );
#endif
#ifdef DEBUGGING
    for ( int i = 0; i < prime_integers.size(); i++ )
    {
        cout << prime_integers[i] << "\n";
    }
    cout << flush;
#endif
    for ( unsigned int i = 3; i < N; i += 2 )
    {
        bool it_is = true;
        for ( unsigned int j = 0; j < prime_integers.size(); j++ )
        {
#ifdef DEBUGGING
    fprintf( stderr, "%s: line %i ok\n", __FILE__, __LINE__ );
    fflush( stderr );
#endif
            if ( i % prime_integers[j] == 0 )
            {
#ifdef DEBUGGING
    fprintf( stderr, "%s: line %i ok\n", __FILE__, __LINE__ );
    fflush( stderr );
#endif
                it_is = false;
            }
        }
        if ( it_is )
        {
            prime_integers.push_back( i );
#ifdef DEBUGGING
            cerr << "pushing: " << i << endl;
#endif
        }
    }

    for ( int i = 0; i < prime_integers.size(); i++ )
    {
        cout << prime_integers[i] << "\n";
    }
    cout << flush;

    return 0;
}
