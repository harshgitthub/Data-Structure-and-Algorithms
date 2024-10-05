#include<iostream>
#include<stack>
#include<queue>

using namespace std ; 
int main(){
    queue<int> s ; 
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(6);

    while(!s.empty()){
        cout<<s.front()<<endl;
        s.pop();
    }

    return 0 ;
}
// queue follows first in first out 
