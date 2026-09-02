// // Example ------> 1
// #include<iostream>
// #include<string>
// using namespace std;


// class Teacher{

//     // properties == attributes
// private:    
//     double salary;

// public:    
//     string name;
//     string dept;
//     string subject;


//     // constructor 

//     Teacher(){
//         cout<<" Hi , I am Constructor..."<<endl;
//     }


//     //methods == Member functions
//     void changeDept(string newDept){
//         dept = newDept;
//     }


//     // setter -------> 
//     // set value
//     void setSalary (int s){
//         salary = s;
//     }

//     // getter ------->
//     // get salary - return salary
//     double getSalary(){
//         return salary;
//     }


// };

// int main(){

//     Teacher t1;
//     t1.name = "Darshan";
//     t1.subject = "C++";
//     t1.dept = "Computer Science";
    
//     t1.setSalary(25000);

//     cout<<t1.getSalary()<<endl;


//     cout<<t1.name <<endl;
    

//     return 0;
// }







 // example -------> 2
// #include<iostream>
// #include<string>
// using namespace std;


// class Teacher{

//     // properties == attributes
// private:    
//     double salary;

// public:    
//     string name;
//     string dept;
//     string subject;

//     // non-paramerterized constructor 
//     Teacher(){
//         dept = "Computer Science"<<endl;
//     }

//     //paramerterized contructor
//     Teacher(string n, string d, string s , double sal){
//        name = n;
//        dept = d;
//        subject = s;
//        salary = sal;
//     }

//     //methods == Member functions
//     void changeDept(string newDept){
//         dept = newDept;
//     }


//     // setter -------> 
//     // set value
//     void setSalary (int s){
//         salary = s;
//     }

//     // getter ------->
//     // get salary - return salary
//     double getSalary(){
//         return salary;
//     }


// };

// int main(){

//     Teacher t1;
//     t1.name = "Darshan";
//     t1.subject = "C++";
//     t1.dept = "Computer Science";
    
//     t1.setSalary(25000);

//     cout<<t1.getSalary()<<endl;


//     cout<<t1.name <<endl;
    

//     return 0;
// }








// example -------> 3 ( How to call contructor )
// #include<iostream>
// #include<string>
// using namespace std;


// class Teacher{

//     // properties == attributes
// private:    
//     double salary;

// public:    
//     string name;
//     string dept;
//     string subject;

//     // non-paramerterized constructor 
//     // Teacher(){
//     //     dept = "Computer Science"<<endl;
//     // }

//     //paramerterized contructor
//     Teacher(string n, string d, string s , double sal){
//        name = n;
//        dept = d;
//        subject = s;
//        salary = sal;
//     }

//     void getInfo(){
//         cout<<"Name :"<<name<<endl;
//         cout<<"Department :"<<dept<<endl;
//         cout<<"Subject :"<<subject<<endl;
//         cout<<"Salary :"<<salary;

//     }


// };

// int main(){

//     Teacher t1("Darshan Hanwate","Computer Scinece","C++",25000);
//     t1.getInfo();
    

//     return 0;
// }











// example -------> 4 ( this )
// #include<iostream>
// #include<string>
// using namespace std;


// class Teacher{

//     // properties == attributes
// private:    
//     double salary;

// public:    
//     string name;
//     string dept;
//     string subject;
//     string salary;

//     Teacher(string name, string dept, string subject , double salary){
//        this->name = name;
//        this->dept = dept;
//        this->subject = salary;
//        this->salary = salary;
//     }

//     void getInfo(){
//         cout<<"Name :"<<name<<endl;
//         cout<<"Department :"<<dept<<endl;
//         cout<<"Subject :"<<subject<<endl;
//         cout<<"Salary :"<<salary;

//     }


// };

// int main(){

//     Teacher t1("Darshan Hanwate","Computer Scinece","C++",25000);
//     t1.getInfo();
    

//     return 0;
// }




