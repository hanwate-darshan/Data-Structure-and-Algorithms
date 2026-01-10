

// #include <iostream>
// using namespace std;
// int linearSearch(int arr[], int size , int target)
// {
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] == target)
//         { // found
//             return i;
//         }
//     }
//     return -1; // not found
// }

// int main()
// {

//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int size = 7;
//     int target = 8;

//     linearSearch(arr, size , target);

//     return 0;
// }


#include<iostream>
using namespace std;


int linearSearch(int arr[] , int n , int key){
    for(int i=1; i<n ; i++){
        if(arr[i] == key){
            return i; // found
        }
    }
    return -1;  // not found
}


int main (){
    
    int arr[] = {10,20,30,40,50,60,70,80};
    int n = sizeof(arr) / sizeof(int);
    int key = 50;

    int result = linearSearch(arr,n,key);

    if(result != -1){
        cout<<"element found at index "<<result<<endl;

    }else{
        cout<<"element not found "<<endl;
    }


    return 0;
}