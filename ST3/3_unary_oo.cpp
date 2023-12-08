#include <iostream>
using namespace std;


// UNARY OPERATOR OVERLOADING ---------------------------------------
/* QUESTION -> Create a class named Complex to represent complex numbers. 
Implement the following functionalities using unary operator overloading:

    1> Overload the unary + operator to return the complex number itself.

    2> Overload the unary - operator to negate the complex number (change the sign of the real and imaginary parts).

    3> Overload the unary ++ (pre-increment) operator to increment both the real and imaginary parts of the complex number by 1 
    and return the updated complex number.

    4> Overload the unary -- (pre-decrement) operator to decrement both the real and imaginary parts of the complex number by 1 
    and return the updated complex number.

    5> Overload the unary ++ (post-increment) operator to increment both the real and imaginary parts of the complex number by 
    1 

    6> Overload the unary -- (post-decrement) operator to decrement both the real and imaginary parts of the complex number by 1 
    */


class Complex{
    public:
    int real;
    int imag;

    Complex(int r,int i){
        real=r;
        imag=i;
    }

    Complex operator+(){
        return Complex(real,imag);
    }

    Complex operator-(){
        return Complex(-real,-imag);
    }

    Complex operator++(){
        return Complex(++real,++imag);
    }

    Complex operator--(){
        return Complex(--real,--imag);
    }

    Complex operator++(int){
        return Complex(++real,++imag);
    }

    Complex operator--(int){
        return Complex(--real,--imag);
    }

    void display(){
        if(imag>=0){
            cout<<real<<" +"<<imag<<"i"<<endl;
        }
        else{
            cout<<real<<" "<<imag<<"i"<<endl;
        }
    }
};

int main(){
    Complex c1(1,2);
    c1.display();
    -c1;
    c1.display();
    // -c1;
    // c1.display();
    // c1++;
    // c1.display();
    // c1--;
    // c1.display();
    // ++c1;
    // c1.display();
    // --c1;
    // c1.display();
}