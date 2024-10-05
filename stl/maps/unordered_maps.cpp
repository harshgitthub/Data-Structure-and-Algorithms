#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, string> m;

     m[1] = "abc";  // O(1) time complexity of insertion and retrieving the value 
    m[6]; // by default empty string , and for int , float we get default 
    m[5] = "acg";
    m[3] = "cds";

    return 0;
}


// unordered maps are different in : 
// time compplexity 
// inbuilt implementation 
// valid key datatypes 

// in case of these we can't use unordered_map<pair<int,int>,string> because of hashing
// multimaps are used to store multiple values corresponding to one index 
// rather we can use maps with vectors to do so 
