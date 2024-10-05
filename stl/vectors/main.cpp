#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> c1;
    vector<float> f1;
    vector<int> v(10, 4);

    for (int i = 0; i < 10; ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.push_back(3);
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // to get the size of the vector / length we use v.size()

    v.pop_back();
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    

    return 0;
}