#include<iostream>
using namespace std ; 
int main(){
    int a[6] = {13,24,46, 52,20,9};
    int n = 6 ; 
    // output should be 9 , 13, 20 , 24 , 46 , 52 in order  

    // select the minimum and swap [selection sort]
    for(int i = 0 ;i<n-1;++i){
        int min ;
        min = i;
        int temp ;
        for(int j = i ; j<n;++j){
            if(a[j]<a[min]){
                min = j;
            }
        }
        temp = a[min] ; 
        a[min] = a[i];
        a[i] = temp ; 
    }
    

    for(int i = 0 ; i < 6;++i){
        cout<<a[i]<<" ";
    }

    return 0 ;
}