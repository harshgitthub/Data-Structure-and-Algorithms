#include<iostream>
using namespace std ; 

// this is inserting elements , finding number of times a particular one occurs 

int main(){
    int a[9];


    for (int i = 0 ; i<9 ;++i){
        cin>>a[i] ;
    }

    for (int i = 0 ; i<9 ;++i){
        cout<<a[i]<<" ";
    }

    int num ; 
    cin>>num ; 

    int count = 0 ; 
    for (int i = 0; i <9 ; ++i){
        if(a[i] == num){
            count++ ;
        }
    }
    cout<<count ; 
    return 0 ; 


}