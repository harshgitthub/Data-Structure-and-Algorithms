#include <iostream>
#include <utility>

using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << "\n";


    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << "  " << p2.second.second << " \n";


    // we can also make array of pair

    pair<int, int> arr[] = {{1, 2}, {4, 5}, {3, 1}};
    cout << arr[1].first << " , " << arr[1].second << " \n";

}


int main()
{
    explainPair();
    return 0;
}