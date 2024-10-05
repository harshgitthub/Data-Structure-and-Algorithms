/* given n strings print unique strings in
lexiographical order with their frequency  
N <= 10^5 
S <= 100
*/

#include<iostream>
#include<map>
using namespace std ; 
int main(){

    map<string, int> m ;
    int n ; 
    cin>> n ;

    for(int i =0 ; i< n;++i){
        string s ; 
        cin>> s ; 
        m[s] ++ ;
    }

    map<string, int> :: iterator it ; 
     for(it = m.begin(); it != m.end();++it){
        cout<<(*it).first << " "<< (*it).second ; 
        cout<<endl ;
    }

    return 0 ;

}

// here since we have to print in order then use ordered maps otherwise we always use unordered maps 
// since time complexity is less