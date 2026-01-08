#include <iostream>
using namespace std;

int main()
{

    // 1) Loop over array

    // int marks[] = {10 , 20 , 30 ,40 , 50};
    // int size = 5;
    // // int sz = sizeof(marks) / sizeof(int);
    // for(int i=0; i<=size ; i++){
    //     cout<< marks[i] <<endl;

    // }



    // 2) taking User input to the array
    int size = 5;
    int marks[size];

    for (int i = 0; i <= size; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i <= size; i++)
    {
        cout << marks[i] << endl;
    }


    

    return 0;
}