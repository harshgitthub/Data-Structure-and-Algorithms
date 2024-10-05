#include<iostream>
using namespace std ; 
int main(){

    int a[3] = { 1,3,3};
    // name of array is a constant  pointer 
    // therefore store the address of a[0]

    cout<< *a ; 
    cout<< endl<< a ;  // this is the address of the first value in array i.e 1 
    cout<< endl << *(a)+1 ; 

    int *p = a ; 
    cout<< endl << p[1] ; 
    

    return 0 ; 
}