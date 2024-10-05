#include<iostream>
#include<algorithm>
#include<vector>

// UPPER AND LOWER BOUND FUNCTION 
// these work in sorted arrays only 
using namespace std ;
int main(){

    int a[6];
    for(int i =0 ; i <6;++i){
        cin>>a[i];
    }
    sort(a, a+6);

    
    // 4 5 5 7 8 25 
    // lower bound finds that element or the element greater than the told one if told one is not found 
    // however if no element greater than it is there than it returns the pointer to the next element of the last one 

    // upper bound always found the just greater 

    // these function returns the location

    cout<<endl ;

    int *ptr = lower_bound(a, a+6 ,5) ;
    cout<< ptr <<" "<< *ptr<<endl ;

    int *pt = upper_bound(a, a+6 ,5) ;
    cout<< pt <<" "<< *pt<<endl ;

    // for vector 
    vector<int> v(6);

    for(int i =0 ; i <6;++i){
        cin>> v[i];
    }
    sort(v.begin(), v.end());

    auto it = upper_bound(v.begin(), v.end(), 6);
    cout<< *it ; 
    
    return 0 ; 
}