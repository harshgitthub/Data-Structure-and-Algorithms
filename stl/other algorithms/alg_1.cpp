#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric> // for accumulate 

using namespace std ; 
int main(){
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for(int i =0 ; i < v.size();++i){
        cin>> v[i] ; 
    }
    cout<<endl;
    int min = *min_element(v.begin(), v.end()); // return the pointer in case of array and iterator in case of vector
    cout<<min<<endl;
    int max = *max_element(v.begin(), v.end());
    cout<<max<<endl;
    int sum = accumulate(v.begin(), v.end(), 0);

    // for reversing an array 
    reverse(v.begin(), v.end());
    for(int i =0 ; i < v.size() ;++i){
        cout<< v[i]<<" ";
    }

    return 0 ; 
}