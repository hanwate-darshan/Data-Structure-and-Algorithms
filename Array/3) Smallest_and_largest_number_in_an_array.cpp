#include <iostream>
#include <climits>
using namespace std;

int main()
{

    // Method 1 :

    // int nums[] = {5, 15, 22, 1, -15, 24};
    // int size = 6;

    // int smallest = INT_MAX;

    // for (int i = 0; i < size; i++) {
    //     if (nums[i] < smallest) {
    //         smallest = nums[i];
    //     }
    // }
    // cout << "Smallest: " << smallest;

    // Method 2
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    int largest  = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        smallest = min(smallest, nums[i]);
        largest = max(largest, nums[i]);
    }
    cout<<"Largest :" <<largest;
    cout << "Smallest :" << smallest;

    return 0;
}
