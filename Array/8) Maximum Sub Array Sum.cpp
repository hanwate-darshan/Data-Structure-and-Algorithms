// Maximum Sub Array Sum Problem 
// -- Brute Force Approach

#include <iostream>
#include <climits>
using namespace std;

int main() {

    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    for (int start = 0; start < size; start++) {
        int currSum = 0;
        for (int end = start; end < size; end++) {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "max subArray sum = " << maxSum << endl;

    return 0;
}
