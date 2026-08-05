#include <iostream>
#include <vector>

using namespace std;

 int recursiveBinarySearch(vector <int> arr, int tar , int st , int end){
    if(st <= end){
        int mid = st + (end - st)/2;

        if(tar > arr[mid]){ //2nd half
            return recursiveBinarySearch(arr,tar,mid+1,end);
        }else if(tar < arr[mid]){
            return recursiveBinarySearch(arr,tar,mid-1,end);

        }else{
            return mid;
        }
    }

    return -1;
 }


int main(){

    vector <int> arr = {-1 , 0 , 3 , 4 , 5, 9 , 12};
    int target = 9;
    

    return 0;
}