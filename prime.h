#include <iostream>
#include <string>

using namespace std;

/**
 * @brief checks if the number is prime
 * 
 * @param x the number to be checked
 * 
 * @return true if the number is prime and false if not
*/
bool is_prime( int x );

/**
 * @brief creates a string which contains all elements from sequence A (maintaining the order) except those, that are present in sequence B p times, where p is a prime number
 * 
 * @param arr_a reference to an array of A sequence elements
 * @param arr_b reference to an array of B sequence elements
 * 
 * @return string value - the sequence of ints created
*/
string create_c( int arr_a[], int arr_b[] );