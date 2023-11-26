#include "prime.h"

bool is_prime( int x ){
    double check1 = ( double )( x + 1 ) / 6.;
    double check2 = ( double )( x - 1 ) / 6.;
    if(  x == 2 || x == 3 || check1 - ( int )check1 == 0 || check2 - ( int )check2 == 0 ) return true;
    return false;
}

string create_c( int arr_a[], int arr_b[] ){
    int *arr_c = find_c( arr_a, arr_b );

    string c = "[";
    for( int i = 0; arr_c[i] != NULL; i++ ){
        c = c + to_string( arr_c[i] ) + ',';
    }
    c.substr( 0, c.length() - 2 );
    c = c + ']';

    delete[] arr_c;
    return c;
}

int *find_c( int arr_a[], int arr_b[] ){
    int *arr_c = new int[10];
    int counter = 0;

    for( int i = 0; arr_a[i] != NULL; i++ ){
        int count = 0;
        for( int j = 0; arr_b[j] != NULL; j++ ) if( arr_b[j] == arr_a[i] ) count++;
        if( !is_prime( count ) ){
            cout << "nie jest pierwsza: " << count << endl;
            arr_c[counter] = arr_a[i];
            counter++;
        }

        if( counter >= 10 ){
            //realloc
        }
    }

    return arr_c;
}