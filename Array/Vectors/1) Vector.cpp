#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // initialization 1
    vector<int> vec; // 0
    cout << vec[0];

    // initialization 2
    vector<int> vec = {1, 2, 3};
    cout << vec[0] << endl;

    // initialization 3

    vector <int> vec(5,0);  // vec(size , value)
    cout<< vec(0) <<endl;
    cout<< vec(1) <<endl;
    cout<< vec(2) <<endl;
    cout<< vec(3) <<endl;
    cout<< vec(4) <<endl;


    return 0;
}