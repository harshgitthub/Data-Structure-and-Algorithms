// BALANCED PARENTHESIS


#include<iostream>
#include<stack>
#include<queue>
#include<unordered_map>

using namespace std ; 
// here we use unordered maps 
unordered_map<char,int> symbols = {
    {'[',-1},
    {'(',-2},
    {'{',-3},
    {']', 1},
    {')', 2},
    {'}', 3}
};



string isBalanced(string s){
    stack<char> st ;
    for(char bracket:s){
        if(symbols[bracket] < 0){
            st.push(bracket);
        }
        else{
            if(st.empty()) return "no";
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] != 0 ){
                return "no" ;
            }

        }

    }

    if (st.empty()){
        return "yes";
    }
    else{
        return "no";
    }

}

int main(){
    int t ; 
    cin>>t ; 

    while(t--){
        string s;
        cin>> s; 
        cout<< isBalanced(s)<<endl ;
    }
    

    return 0 ;
}