#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{ // Iterative code
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        // Instead of this we optimize the code
        // int mid = (start + end) / 2; 

        int mid = start + (end - start) / 2;

        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            start = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    // odd
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int target1 = 12;

    cout << "Binary Search :" << binarySearch(arr1, target1);

    return 0;
}