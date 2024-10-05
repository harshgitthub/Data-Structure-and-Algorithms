#include<iostream>
#include<vector> 
#include<algorithm> // for sorting 
using namespace std ; 

bool should_i_swap( int a , int b){
    if(a>b)return true ;
    return false ; 

}

int main(){
    int N  = 5;
    int a[5] ;

    for(int i =0 ; i < N ;++i){
        cin>>a[i] ;
    } 
    for(int i =0 ; i< N;++i){
        for (int j =i+1;j< N;++j){
            if(should_i_swap(a[i],a[j])){ // comparator functions 
                swap(a[i],a[j]);
            }
        }
    }

    // in case of inbuilt sorting if you want to sort then return false 
    // here there can be trick like what you want return that thing only 
    

    // sort(a +2 , a+N); INBUILT SORTING ALGORITHMS 
    for(int i =0 ; i < N ;++i){
        cout << a[i] << " " ;
    } 


    return 0;
}