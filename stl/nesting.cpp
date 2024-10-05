// vector of vector , pair of pair 

#include<vector>
#include<iostream>

using namespace std ; 

void printVec(vector <pair<int,int>> &v){
    cout<<"size : "<< v.size()<<endl;
    for(int i =0 ;i < v.size();++i){
        cout<<v[i].first<<" "<<v[i].second<<" ";
    }
    cout<<endl; 
}

void printvec(const vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    // vector of pair 
    vector<pair<int,int>> v = {{1,2},{4,5},{2,4}} ; 
    printVec(v) ;
    int n ; 
    cin>>n ;
    // now to take inputs we use 
    vector<pair<int,int>> p;
    for(int i =0 ; i<n ;++i){
        int x, y ;
        cin>>x>>y ;
        p.push_back({x,y});
    }

    printVec(p); 

   
    // array of vectors 
    int r ;
    cin>> r;
    vector<int> q[3];
     
    for(int i =0 ; i < r;++i){
        int x ; 
        cin>>x ;
        for(int i = 0 ;i<x;++i){
            int k ;
            cin>>k;
            q[i].push_back(k);
        }
    }

    for(int i =0 ; i<3;++i){
        printvec(q[i]);
    }


    //  vector of vectors of previous 
    // here rows also becomes dynamic 
       int r ;
    cin>> r;
    vector<vector<int>> t;
     
    for(int i =0 ; i < r;++i){
        int x ; 
        cin>>x ;
        vector<int> temp;
        for(int i = 0 ;i<x;++i){
            int k ;
            cin>>k;
            temp.push_back(k);
        }
        t.push_back(temp);
    }


    for(int i =0 ; i<t.size();++i){
        printvec(t[i]);
    }
    

    return 0; 
}