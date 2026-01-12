# include <iostream>
# include <vector>
using namespace std;

int main(){

    vector <int> vec = {1,2,3,4,5};
    for(int i: vec){
        cout<<i<<endl;  // output will be : 1 2 3 4 5
                        
    }


    vector <char> character = {'a','b','c','d'};
    for(char i: character){
        cout<<i<<endl;   // output will be : a , b , c , d
    }


    vector <int> numbers = { 10 , 20 , 30 , 40 , 50};
    for(int val : numbers){
        cout<< val <<endl;   // output will be : 10 , 20 , 30 ,40 
    }
     

    return 0;
}
