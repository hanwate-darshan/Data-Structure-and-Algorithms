#include <iostream>
using namespace std;

int main(){
    int marks[5] = {10 , 20 , 30 ,40 ,50 };
    int price[] = { 50 , 10 , 34 ,45};

   cout<<marks[0]<<endl;
   cout<<marks[1]<<endl;
   cout<<marks[2]<<endl;
   cout<<marks[3]<<endl;
   cout<<marks[4]<<endl;


   // How to change element of the array
   marks[0] = 101;
   cout<<"marks:"<< marks[0]<<endl;



    return 0;
}