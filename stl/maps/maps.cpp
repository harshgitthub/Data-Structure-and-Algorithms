#include<iostream>
#include<map>
using namespace std ; 

void print(map<int, string> m){
    cout<< m.size() << "\n";
    map<int , string> :: iterator it ;
    for(it = m.begin(); it != m.end();++it){
        cout<<(*it).first << " "<< (*it).second ; 
        cout<<endl ;
    }
}

int main(){
    map<int, string> m ; 
    m[1] = "abc";  // O(log(n)) time complexity of insertion and retrieving the value 
    m[6]; // by default empty string , and for int , float we get default 
    m[5] = "acg";
    m[3] = "cds";
    m.insert({4,"afg"});
    print(m) ;
    // keys are stored in sorted order 
    // these keys are unique that is no duplicate keys are allowed 
    auto it  = m.find(9); // returns the iterator of value 3 
    // if there is no 3 then it return m.end()
    //  O(log(n)) time complexity 

    if (it == m.end()){
        cout<<"no value"<<endl ;
    }
    else{
        cout<< (*it).first <<" "<<(*it).second<< endl; 
    }
    m.erase(3);

    auto i = m.find(7); 
    if(i != m.end()){
        m.erase(it);
    }
    print(m) ;
    m.clear();
    print(m);

    // if 
    map<string, string> mp;
    mp["abcd"] = "abcd" ; // time complexity s.size() * log(n)
    return 0 ; 
}