#include <iostream>
#include<cstring>
using namespace std;

/* Topic 1 -> Types of Constructors ---------------------------------------------------------------------------

TYPE 1 -> DEFAULT CONSTRUCTORS :-
    -A constructor without any arguments or with the default value for every argument 
    -If default constructor is not defined in the source code by the programmer, 
    then the compiler defined the default constructor implicitly during compilation.

class A{
    public:
    A(){
        cout<<"Constructor for A"<<endl;
    }
};

class B: public A{
    public:
    B(){
        cout<<"Constructor for B"<<endl;
    }
};

class C : public B{
    public:
    C(){
        cout<<"Constructor for C"<<endl;
    }
};

int main(){
    C c;
}


TYPE 2 -> Parameterized Constructors :-
    -pass arguments to constructors

-QUESTION -> Create a class named Employee to represent employees in a company. 
Implement the following functionalities using parameterized constructors:
    1> A parameterized constructor that takes the employee's name, employee ID, and salary as arguments and initializes the corresponding 
    member variables.

    2> Implement a member function display that displays the employee details.

    3> Create a derived class named Manager that inherits from the Employee class. 
    The Manager class should have an additional member variable for the number of subordinates the manager oversees.

    4> Overload the display function in the Manager class to include the number of subordinates.

    5> Implement a parameterized constructor in the Manager class that initializes the manager's name, ID, salary, 
    and the number of subordinates.

    6> Create an array of Employee and Manager objects. Use a loop to display the details of each employee and manager.

class Employee{
    public:
    char name[100];
    int id;
    int salary;
    Employee(char * n,int i,int s){
        strcpy(name,n);
        id=i;
        salary=s;
    }

    void display(){
        cout<<"Name: "<<name<<endl<<
        "ID: "<<id<<endl<<
        "Salary: "<<salary<<endl;
    }
};

class Manager:public Employee{
    public:
    int n;

    Manager(char * n,int i,int s,int number)
        : Employee(n,i,s), n(number) {}

    void display(){
        cout<<"Name: "<<name<<endl<<
        "ID: "<<id<<endl<<
        "Salary: "<<salary<<endl<<
        "Number of subordinates overseen: "<<n<<endl;
    }
};

int main(){
    char name[]="Jasjeet";
    Manager m1(name,442,80000,10);
    m1.display();
}


TYPE 3 -> COPY CONSTRUCTOR :-
    -is used to create a new object as a copy of an existing object

QUESTION -> 
*/





