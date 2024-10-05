// all of 
// returns boolean 
// 1 for True and 0 for False 


#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std ;

bool is_positive(int v){
    return v>0 ;
}

int main(){
    vector<int> v = { 2,3 ,-4} ;
    cout<< all_of(v.begin(), v.end() , [](int x){return x>0 ;}); // when all are positive
    cout<<endl;
    cout<<all_of(v.begin(), v.end() , is_positive) ;
    cout<<endl; 
    cout<<any_of(v.begin(), v.end(), [](int x){return x>0 ;});
    cout<<endl;
    cout<<none_of(v.begin(), v.end(), [](int x){return x>0 ;}); // when all are not positive 
    cout<<endl; 
    return 0 ; 
}

// % : modulo gives the remainder 