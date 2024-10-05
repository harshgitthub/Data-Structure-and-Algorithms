#include<iostream>
using namespace std ; 
int main(){
    int a[6] = {13,24,46, 52,20,9};
    int n = 6 ; 
    // output should be 9 , 13, 20 , 24 , 46 , 52 in order  

    // select the maximum and swap with adjacent [bubble sort]
    for(int i = 0 ;i<n-1;++i){
        for(int j = 0; j<n-i+1;++j){
            if(a[j]>a[j+1]){
                int temp; 
                // this is adjacent swap 
                temp = a[j];
                a[j]= a[j+1];
                a[j+1] = temp ; 
            }
        }
    }

    

    for(int i = 0 ; i < 6;++i){
        cout<<a[i]<<" ";
    }

    return 0 ;
}