// lambda functions : syntax to write small temporary functions 


#include<iostream>
#include<numeric>
#include<algorithm>

using namespace std ; 
int main(){
    auto sum = [](int x, int z){return x+z;} ;
    cout<< sum(3,4);
    return 0 ;
}