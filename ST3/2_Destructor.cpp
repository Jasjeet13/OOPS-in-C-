#include <iostream>
#include <cstring>
using namespace std;


// DESTRUCTOR -------------------------------------
/* QUESTION -> You are a secret agent working on a mission to build a hidden base. Design a class SecretBase
with attributes for the base location and security level. Implement a default constructor that
initializes the location to "Unknown" and security level to 0. Additionally, include a destructor to
print a message when the base is destroyed.
Test Case1:
Input: N/A
Output: A secret base with an unknown location, security level 0, and a message when the base
is destroyed.
Test Case 2: Creating a Custom Secret Base and Destroying it
Input:
Custom location: "Mount Everest"
Custom security level: 5
Expected Output:
A SecretBase object is created with the location set to "Mount Everest" and the security
level set to 5.
A message is displayed when the SecretBase object is destroyed, indicating the
destruction of the secret bas*/

class SecretBase{
    public:
    char name[100];
    int level;

    SecretBase(){
        strcpy(name,"Unknow");
        level=0;
    }

    SecretBase(char * n,int l){
        strcpy(name,n);
        level=l;
    }

    ~SecretBase(){
        cout<<"Seret Base destroyed"<<endl;
    }

    void display(){
        cout<<"A SecretBase object is created with the location set to "<<name<< " and the security level set to "<<level<<
        "."<<endl;
    }
};

int main(){
    SecretBase s1;
    s1.display();
}