#include "prime.h"

bool is_prime( int x ){
    double check1 = ( double )( x + 1 ) / 6.;
    double check2 = ( double )( x - 1 ) / 6.;
    cout << "Double1 " << check1 << " i double2 " << check2 << endl;
    if(  x == 2 || x == 3 || ( check1 != 0 && check1 - ( int )check1 == 0 ) || ( check2 != 0 && check2 - ( int )check2 == 0 ) ) return true;
    return false;
}

string create_c( int arr_a[], int arr_b[] ){
    int *arr_c = find_c( arr_a, arr_b );

    string c = "[";
    for( int i = 0; arr_c[i] != NULL; i++ ){
        c = c + to_string( arr_c[i] ) + ',';
    }
    c = c.substr( 0, c.length() - 1 );
    c = c + ']';

    delete[] arr_c;
    return c;
}

int *find_c( int arr_a[], int arr_b[] ){
    int counter = 0;
    int max = 10;
    int *arr_c = new int[max];

    for( int i = 0; arr_a[i] != NULL; i++ ){
        int count = 0;
        for( int j = 0; arr_b[j] != NULL; j++ ) if( arr_b[j] == arr_a[i] ) count++;
        cout << "Liczby " << arr_a[i] << " mamy " << count << endl;
        if( !is_prime( count ) ){
            cout << "nie jest pierwsza: " << count << endl;
            arr_c[counter] = arr_a[i];
            counter++;
        }

        if( counter >= max ){
            int hold[counter];
            for( int i = 0; i < counter; i++ ) hold[i] = arr_c[i];
            delete [] arr_c;
            max = max + 10;
            arr_c = new int[max];
            for( int i = 0; i < counter; i++ ) arr_c[i] = hold[i];
        }
    }
    arr_c[counter] = NULL;


    return arr_c;
}