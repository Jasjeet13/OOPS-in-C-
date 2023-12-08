#include <iostream>
#include <cstring>
using namespace std;


// INHERITANCE -----------------------------------------------------------
/* 

QUESTION -> In a zoo simulation, you are tasked with designing classes for different animals. Implement a
base class Animal with attributes like name and age. Create derived classes for specific
animals, such as Lion, Elephant, and Monkey, inheriting from the Animal class. Include specific
behaviors for each animal.
Test Case:
Input: A Lion named "Simba" with age 5.
Output: Displaying information about Lion "Simba" including age and specific behavior

class Animal{
    public:
    char name[100];
    int age;

    Animal(char * n,int a){
        strcpy(name,n);
        age=a;
    }
};

class Lion: public Animal{
    public:
    char behavoiur[100];

    Lion(char * n,int a,char * b): Animal(n,a){
        strcpy(behavoiur,b);
    }

    void display(){
        cout<<"Name: "<<name<<endl<<
        "Age: "<<age<<endl<<
        "Behavoiur: "<<behavoiur<<endl;
    }

};

int main(){
    char name[]="Simba";
    char behav[]="cute";
    Lion l1(name,10,behav);
    l1.display();
}


QUESTION -> Question-10:
Continuing with the geometric application, you have the Shape class with a virtual function
calculateArea(). Create derived classes for specific shapes, such as Circle, Rectangle, and
Triangle. Override the calculateArea() function in each derived class to provide shape-specific
area calculations.
Test Case:
Input: A Triangle with color "Blue" and sides of length 6, 8, and 10.
Output: Displaying information about the Blue Triangle, including its calculated area using the
overridden function.
*/

class Shape{
    
}