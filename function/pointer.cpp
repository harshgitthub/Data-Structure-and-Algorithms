#include<iostream>
using namespace std;
int main(){
    int p = 9 ;
    int *r ; 
    r = &p ;

    cout<< p <<" " << *r << " "<< &p << " "<<&r ;

    // pointer to pointer 

    char c = 't';
    char* pc = &c;
    char** ppc = &pc;
    char*** pppc = &ppc;

    // note there is a difference between a constant pointer and pointer to a constant 
    int g ; 
    int* const cp = &g ; // this is a constant pointer 
    const int k  = 90 ; 
    const int *u = &k ; // this is a pointer to a constant we have to initialize it also 
     
    


    return 0 ;
}