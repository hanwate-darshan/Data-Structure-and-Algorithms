#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};

    // size() : Number of elements
    cout << "Size : " << numbers.size() << endl;

    // push_back()
    numbers.push_back(6);
    numbers.push_back(7);

    // pop_back()
    numbers.pop_back();

    // front() : Returns the first element
    cout << numbers.front() << endl;

    // back() : Returns the last element
    cout << numbers.back() << endl;

    // at(index)
    cout << numbers.at(0) << endl;
    cout << numbers.at(1) << endl;

    return 0;
}
