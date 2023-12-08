#include <iostream>
#include <cstring>
using namespace std;

/* STRING MANIPULATION USING OPERATOR OVERLOADING
Question -> Two strings, String1 and String2, are provided to you. 
Create the StringManipulator C++ class, which has the following features:
    (i) To compare two instances of StringManipulator, overload the > operator. 
    If String1 is lexicographically larger than String2, it should return true; if not, it should return false.
    
    (ii) To compare two instances of StringManipulator, overload the < operator. 
    If String1 is lexicographically smaller than String2, it should return true; if not, it should return false.

    (iii) To compare two instances of StringManipulator, overload the == operator. 
    If String1 and String2 are equal, it should return true; if not, it should return false.
    
    After completing each process, print the outcome on a different line.
*/

class StringManipulator{
    public:

    char * str;

    StringManipulator(char * s){
        str=new char[strlen(s)+1];
        strcpy(str,s);
    }

    ~StringManipulator() {
        delete[] str;
    }

    bool operator>(StringManipulator& s) 
    {
        return strcmp(str, s.str) > 0;
    }

    bool operator<(StringManipulator& s) 
    {
        return strcmp(str, s.str) < 0;
    }

    bool operator==(StringManipulator& s) 
    {
        return strcmp(str, s.str) == 0;
    }

    void display(){
        cout<<str<<endl;
    }
};

int main(){
    char str1[]="dog";
    char str2[]="cat";

    StringManipulator s1(str1);
    s1.display();
    StringManipulator s2(str2);
    s2.display();

    if(s1<s2){
        cout<<"s2 greater"<<endl;
    }

    else if(s1==s2){
        cout<<"Equal"<<endl;
    }

    else{
        cout<<"s2 less"<<endl;
    }

}