#include<iostream>
#include<vector> 

// functions of vectors are also used in others eg stack , queue 

using namespace std ; 

void explainVector(){

    vector<int> v; 

    v.push_back(1);
    v.emplace_back(2);


    v.emplace_back(3);
    v.emplace_back(4);

    vector<pair<int, int>> v1  ; 

    v1.push_back({1,2});
    v1.emplace_back(2,3);

    vector<int> v2(5,10);
    
    vector<int>v3(v2);

    vector<int>:: iterator it = v.begin() ;
    // here this iterator points to the memory of the first element of v 

    it ++ ; 
    cout<< *it<<" \n";
    it = it + 2 ; 
    cout<< *it ;

    vector<int> :: iterator it2 = v.end() ; 
    // vector<int> :: iterator it = v.rend() ; 
    // vector<int> :: iterator it = v.rbegin() ; 

    

}

int main(){
    explainVector();
    return 0 ; 
}