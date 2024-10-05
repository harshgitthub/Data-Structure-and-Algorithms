// this is used when we have to repeat the same body throughout
// this is like a generalization scheme 

#include<iostream>
using namespace std ; 

template<typename T>
T Abs(T x){
    if(x>0) return x ;
    else return -x ; 
}

int main(){
    int x = 7  ; 
    float y = -0.3 ;

    cout<<Abs(x)<< " " << Abs(y)<< " " ; 
    return 0 ;   

    
}