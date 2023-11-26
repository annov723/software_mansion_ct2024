#include "prime.h"

int main( void ){
    string a, b; //a and b are user input looking like this: "[2,3,9,2,5,1,3,7,10]"
    
    //get data from user (can be passed with <"data.txt")
    cout << "A=";
    cin >> a;
    cout << a << endl;
    cout << "B=";
    cin >> b;
    cout << b << endl;

    //check how many numbers do we have in both sequences
    int size_a = 0, size_b = 0;
    for( int i = 1; i < a.length(); i++ ) if( a[i] == ',' ) size_a++;
    size_a++;
    for( int i = 1; i < b.length(); i++ ) if( b[i] == ',' ) size_b++;
    size_b++;

    //change further numbers form string to int and store them in arrays
    int arr_a[size_a + 1], arr_b[size_b + 1];
    arr_a[size_a] = NULL;
    arr_b[size_b] = NULL;
    int counter = 0;
    for( int i = 1; i < a.length() - 1; i++ ){
        string num = "";
        while( a[i] != ',' && a[i] != ']' ){
            num = num + a[i];
            i++;
        }
        arr_a[counter] = stoi( num );
        counter++;
    }
    counter = 0;
    for( int i = 1; i < b.length() - 1; i++ ){
        string num = "";
        while( b[i] != ',' && b[i] != ']' ){
            num = num + b[i];
            i++;
        }
        arr_b[counter] = stoi( num );
        counter++;
    }

    string c = create_c( arr_a, arr_b );
    cout << "C=" << c << endl;


    return 0;
}