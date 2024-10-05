#include<iostream>
#include<stack>
#include<queue>

using namespace std ; 
int main(){
    stack<int> s ; 
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(6);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0 ;
}

// stack follows first in last out 