#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;


// Switch statements
// for integers
//  int main(){
//      int ch=1;
//      switch(ch){
//          case 1:
//              cout<<"choice 1"<<endl;
//              break;
//          case 2:
//              cout<<"choice 2"<<endl;
//              break;
//          case 3:
//              cout<<"choice 3"<<endl;
//              break;
//          default:
//              cout<<"choice 4"<<endl;
//      }
//  }
// for characters
//  int main(){
//      int ch='a';
//      switch(ch){
//          case 'a':
//              cout<<"choice 1"<<endl;
//              break;
//          case 'b':
//              cout<<"choice 2"<<endl;
//              break;
//          case 'c':
//              cout<<"choice 3"<<endl;
//              break;
//          default:
//              cout<<"choice 4"<<endl;
//      }
//  }

// loops
// int main(){
//     int n=23597;
//     // while(n>0){
//     //     int ld=n%10;
//     //     cout<<ld<<endl;
//     //     n=n/10;
//     //
//}
//     for(;n>0;n=n/10){
//         int ld=n%10;
//         cout<<ld<<endl;
//     }
//}

// print whether prime or not
//  int main(){
//      int n;
//      cout<<"Enter the number: "<<endl;
//      cin>>n;
//      int a=0;
//      for(int i=2;i<n;i++){
//          if(n%i==0){
//              a++;
//          }
//      }
//      if(a>0){
//          cout<<"Not prime"<<endl;
//      }
//      else{
//          cout<<"Prime"<<endl;
//      }
//      return 0;
//  }

// Arrays
// int main(){
//  int a[]={1}; //intializes first value to 1 and rest values actomatically becomes 0
// cout<<a<<endl;  will give a hexadecimal number , a-> stores address of first element
// taking inputs and outputs
//  for(int i=0;i<4;i++){
//      cin>>a[i];
//  }
//  for(int i=0;i<5;i++){
//      cout<<a[i]<<endl;
//  }
// Find the minimum element in an array
//  int a[]={1,2,3,4,-100};
//  int n=sizeof(a)/sizeof(a[0]);
//  int min=a[0];
//  for(int i=0;i<n;i++){
//      if(min>=a[i]){
//          min=a[i];
//      }
//  }
//  cout<<min;
//}

// BUBBLE SORT
//  int main(){
//  int a[]={5,4,3,2,1};
//  int n=sizeof(a)/sizeof(a[0]);
//  for(int i=0;i<n-1;i++){
//      for(int j=0;j<n-2;j++ ){
//          if(a[j]>a[j+1]){
//              swap(a[j],a[j+1]); //use swap rather using a 3rd variable
//          }
//      }
//  }
//  for(int i=0;i<n;i++){
//      cout<<a[i]<<" ";
//  }
//  }

// SELECTION SORT----------------------------------------------------------
//  int main(){
//      int a[]={5,4,3,2,1};
//      int n=sizeof(a)/sizeof(a[0]);
//      for(int i=0;i<n;i++){
//          int min_index=i;
//          for(int j=i+1;j<n;j++){
//              if(a[j]<a[min_index]){
//                  min_index=j;
//              }
//          }
//              swap(a[i],a[min_index]);
//      }
//      for(int i=0;i<n;i++){
//          cout<<a[i]<<endl;
//      }
//  }

// INSERTION SORT----------------------------------------------------------------------
//  int main(){
//      int a[]={4,2,1,3};
//      int n=sizeof(a)/sizeof(a[0]);
//      int j;
//      for(int i=1;i<n;i++){
//          int pc=a[i];
//          for(j=i-1;j>=0;j--){   -->for(j=i-1;j>=0 and a[j]>pc;j--)
//              if(a[j]>pc){
//                  a[j+1]=a[j];
//          }
//              else{
//                  break;
//                  }
//          }
//          a[j+1]=pc;
//      }
//      for(int i=0;i<n;i++){
//          cout<<a[i]<<endl;
//      }
//  }

// 2D ARRAYS------------------------------------------------------------------------
// int main(){
// int a[2][3]={
//     {1,2,3},
//     {4,5,6}
// };
// for(int i=0;i<3;i++){
//     for(int j=0;j<2;j++){
//         cout<<a[j][i]<<" ";
//     }
// }
// }

// WAVE PRINTING---------------------------------------------------------------------
//  int main(){
//  int a[4][4]={
//      {1,2,3,4},
//      {2,13,14,5},
//      {11,16,15,6},
//      {10,9,8,7}
//  };
//     for(int i=0;i<4;i++){
//         if(i%2==0){
//         for(int j=0;j<4;j++){
//                 cout<<a[j][i]<<" ";
//             }
//         }
//         else{
//             for(int k=3;k>=0;k--){
//                 cout<<a[k][i]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// SPIRAL WAVE ------------------------------------------------------------------------------------
//  int main(){
//      int a[4][4]={
//          {1,2,3,4},
//          {5,6,7,8},
//          {9,10,11,12},
//          {13,14,15,16}
//      };

//     int sc=0,ec=3,sr=0,er=3;
//     while(sr<=er and sc<=ec){

//     for(int col=sc;col<=ec;col++){
//         cout<<a[sr][col]<<" ";

//     }
//         sr++;
//     //cout<<endl;

//     for(int row=sr;row<=er;row++){
//         cout<<a[row][ec]<<" ";
//     }
//         ec--;
//     //cout<<endl;

//     for(int col=ec;col>=sc;col--){
//         cout<<a[er][col]<<" ";
//     }
//         er--;
//     //cout<<endl;

//     for(int row=er;row>=sr;row--){
//         cout<<a[row][sc]<<" ";
//     }
//     sc++;
//     //cout<<endl;
// }
// }

// MERGE TWO SORTED LISTS------------------------------------------------------------------------
//  int main(){
//      //int a[]={1,3,5,9,10,11};
//      //int b[]={2,5,12,13,15,17,19,21};
//      int n;
//      cin>>n;
//      int a[100000];
//      for(int i=0;i<n;i++){
//          cin>>a[i];
//      }
//      int m;
//      cin>>m;
//      int b[100000];
//      for(int i=0;i<m;i++){
//          cin>>b[i];
//      }
//      int out[100000];
//      int i=0,j=0,k=0;
//      while(i<n and j<m){
//          if(a[i]<b[j]){
//              out[k]=a[i];
//              i++;
//              k++;
//          }
//          else{
//              out[k]=b[j];
//              j++;
//              k++;
//          }
//      }
//      while(j<m){
//          out[k]=b[j];
//          j++;
//          k++;
//      }
//      while(i<n){
//          out[k]=a[i];
//          i++;
//          k++;
//      }

//     for(int q=0;q<k;q++){
//         cout<<out[q]<<" ";
//     }

//     return 0;
// }

// POINTERS ---------------------------------------------------------------------
//   int main(){
//  int a=10;
//  int *b = &a; // int * ->it is an integer pointer
//  cout<<a<<endl;
//  cout<<&a<<endl; //&->gives the address of variable it is used with
//  cout<<b<<endl; // output will be 0x61ff08 0x->the coming number is hexadecimal

// float f=11.1;
// float *fptr=&f;
// cout<<f<<endl;
// cout<<&f<<endl;
// cout<<fptr<<endl;

// CHARACTER POINTERS
//  char ch='A';
//  char * chptr=&ch;

// cout<<ch<<endl;
// cout<<&ch<<endl; //will give a garbage values, it will print garbage values till null value is reached
// cout<<(int *)chptr<<endl; //typeconversion of char pointer to int pointer to give a hexadecimal number
// cout<<(float *)chptr<<endl;
// cout<<(void *)chptr<<endl;

// dereference
//  int a=5;
//  int *b=&a;
//  cout<<a<<endl;
//  cout<<b<<endl;
//  cout<<*b<<endl;
//  cout<<*(&a)<<endl;
//  cout<<&b<<endl;

//  int * gar;
//  cout<<gar<<endl; //gives a garbage value, to prevent this intial. it with NULL and this will throw an error

// pointer to a pointer

// int ** ptr= &b;
// cout<<ptr<<endl;

// pointers in array
// int a[5]={1,2,3,4,5};
// cout<<a<<endl; //address of 1st block
// cout<< *(a) <<endl; //vallues of first block
//  for(int i=0;i<5;i++){
//      cout<<*(a+i)<<" "; //always but in brackets
//  }

// STRINg POINTERS
//   char s[4];
//  s[0]='a';
//  s[1]='b';
//  s[2]='c';
//  s[3]='\0';
//  cout<<s<<endl;

// char s[100]="abc"; //it gives a null character at the end automatically, s has size 4
// cout<<s<<endl;

//  }

// Memory
// dynamic array
//   int main(){
//  int * a = new int [100];  //int * a = pointer storing address of the dynamic array(present in stack memory)
//  for(int i=0;i<100;i++){ // new -> allocates memory to array and return its address (done in heap memory)
//      a[i]=i+1;
//  }
//  for(int i=0;i<100;i++){
//      cout<<a[i]<<" ";
//  }
//  return 0;

// int * a = new int;
// *a=1e9;
// cout<<*a<<endl;
//  }

// 2-D arrays
//  int main(){
//      int n,m;
//      cin>>n>>m;

//     int ** a=new int* [n];
//     for(int i=0;i<n;i++){
//         a[i]=new int[m];
//     }

//     for(int i=0;i<n;i++){
//         cout<< a[i] << " ";
//     }

//     cout<<endl;

//     int val=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             a[i][j]=val++;

//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     for(int i=0;i<n;i++){
//         delete[] a[i];
//         a[i]=NULL;
//     }

//     delete[] a;
//     a=NULL;
// }

// Recurssions

// factorial
//  int fact(int n){

//     //base cae
//     if(n==0){
//         return 1;
//     }

//     //recursive case->breakdown of bigger problem to smaller problem
//     int cp=fact(n-1);
//     int bd=cp*n;
//     return bd;
// }

// int main(){
//     int n;
//     cin>>n;
//     int r=fact(n);
//     cout<<r;
// }

// fibonacci series
//  int fib(int n){
//      //base case
//      if(n==1){
//          return 1;x
//      }
//      if(n==0){
//          return 0;
//      }

//     //recurssive case
//     int cp1=fib(n-1);
//     int cp2=fib(n-2);
//     int bp=cp1+cp2;
//     return bp;
// }
// int main(){
//     int n;
//     cin>>n;
//     cou  t<<fib(n);
// }

// //Check if array is sorted
// //assume from index 1st to n-1 and then check if a[0]<a[1]
// // int f(int *a,int i,int n){
// //     //base case
// //     if(i==n-1 or i==n){
// //         return true;
// //     }

// //     //recur case
// //     int cp=f(a,i+1,n);
// //     if(cp==true and a[i]<a[i+1]){
// //         return true;
// //     }
// //     else{
// //         return false;
// //     }
// // }

// // int main(){
// //     int a[]={1,4,9,10,11};
// //     int n=sizeof(a)/sizeof(int);
// //     if(f(a,0,n)==true){
// //         cout<<"sorted"<<endl;
// //     }
// //     else{
// //         cout<<"not sorted"<<endl;
// //     }
// //     return 0;
// // }

// //Find sum of array
// int f(int *a,int i,int n){
//     //base case
//     if(i==n){
//         return 0;
//     }

//     //recur case
//     int cp=f(a,i+1,n);
//     int bd=a[i]+cp;
//     return bd;
// }

// int main(){
//     int a[]={1,2,3};
//     int n=sizeof(a)/sizeof(int);
//     int r=f(a,0,n);
//     cout<<r;

//     return 0;
// }

// Find first occurence of 7 in an array
//  int f(int *a,int i,int n){
//      //base case
//      if(i==n){
//          return 0;
//      }

//     //recur case
//     if(a[i]==7){
//         int bd=i;
//         return bd;
//     }

//     int cp=f(a,i+1,n);
//     return cp;

// }

// int main(){
//     int a[]={1,7,3,9,7,9};
//     int n=sizeof(a)/sizeof(int);
//     int r=f(a,0,n);
//     cout<<r;

//     return 0;
// }

// last occurence of 7
// Find first occurence of 7 in an array
//  int f(int *a,int i,int n){
//      //base case
//      if(i==n){
//          return 0;
//      }

//     //recur case

//     if(a[i]==7){
//         int bd=i;
//     }

//     int cp=f(a,i+1,n);
//     return cp;

// }

// int main(){
//     int a[]={1,7,3,9,7,9};
//     int n=sizeof(a)/sizeof(int);
//     int r=f(a,0,n);
//     cout<<r;

//     return 0;
// }

// sum of n natural numbers by indirect recurssion

// int A(int);

// int B(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+A(n-1);
// }

// int A(int n){
//     if(n==0){
//         return 0;
//     }

//     return n+B(n-1);
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<A(n)<<endl;
// }

// class
//  class car{
//  public: //by default its private and we wont be able to access them
//      int price;
//      int engine;
//      void moving(){ //functions inside a class also called methods
//                  cout<<"car is moving..."<<endl;
//      }
//  };

// int main(){
//     car c1;

//     c1.price=10000000;
//     c1.engine=1100;

//     cout<<"price is"<<c1.price<<endl;

//     c1.moving();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Complex{
//     public:
//     int real;
//     int imaginary;
//     void subtract(Complex m);
//     void addition(Complex m);
//     void multiplication(Complex m);
// };
//     void Complex::subtract(Complex m){
//         cout<<"Sub is "<<real-m.real<<" + i "<<imaginary-m.imaginary<<endl;
//     }
//     void Complex::multiplication(Complex m){
//         int mr=real*m.real-imaginary*m.imaginary;
//         int mi=real*m.imaginary+imaginary*m.real;
//         cout<<"Mul is "<<mr<<" + i "<<mi<<endl;
//     }
//     void Complex::addition(Complex m){
//         cout<<"Add is "<<real+m.real<<" + i "<<imaginary+m.imaginary<<endl;
//     }
// // void calculate(Complex c1,Complex c2){
// //     int addr=c1.real+c2.real;
// //     int addi=c1.imaginary+c2.imaginary;
// //     int subr=c1.real-c2.real;
// //     int subi=c1.imaginary-c2.imaginary;
// //     cout<<"add is "<<addr<<"+i"<<addi<<endl;
// //     cout<<"sub is "<<subr<<"+i"<<subi<<endl;
// // }
// int main(int argc, char const *argv[])
// {
//     Complex c1,c2;
//     c1.real=10;
//     c1.imaginary=5;
//     c2.real=5;
//     c2.imaginary=2;
//     c1.subtract(c2);
//     c1.addition(c2);
//     c1.multiplication(c2);
//     return 0;
// }

// classes

// class Student{
//     public:
//     char name[100];
//     int roll_no;
//     static int ct; //it is shared by all s1,s2,s3 like  other function in Student
//     void set(char * n,int r){
//         ct++;
//         strcpy(name,n);
//         roll_no=r;
//     }

//     int get_roll_no(){
//         return roll_no;
//     }

//     char * get_name(){
//         return name;
//     }

//     void display(){
//         cout<<"name "<<name<<" roll no: "<<roll_no<<endl;
//     }
// };

// int Student::ct; //scope resolution variable

// int main(){
//     Student s1,s2,s3;
//     char a[]="abc";
//     char b[]="def";
//     char c[]="fhi";

//     s1.set(a,123);
//     s2.set(b,234);
//     s3.set(c,345);
//     s1.display();
//     s2.display();
//     s3.display();

//     cout<<Student::ct<<endl; //can be directly accessed

//     return 0;
// }

// static member functions -> do not need to make objects
//  class Student{
//      public:
//      char name[100];
//      int roll_no;
//      static int ct; //it is shared by all s1,s2,s3 like  other function in Student
//      void set(char * n,int r){
//          ct++;
//          strcpy(name,n);
//          roll_no=r;
//      }

//     int get_roll_no(){
//         return roll_no;
//     }

//     char * get_name(){
//         return name;
//     }

// void display(){
//     cout<<"name "<<name<<" roll no: "<<roll_no<<endl;
// }

//     static void print(){
//         cout<<ct<<endl; //it has default value value
//         cout<<"static function"<<endl;
//     }
// };

// int Student::ct; //scope resolution variable

// int main(){
// Student s1,s2,s3;
// char a[]="abc";
// char b[]="def";
// char c[]="fhi";

// s1.set(a,123);
// s2.set(b,234);
// s3.set(c,345);
// s1.display();
// s2.display();
// s3.display();

// cout<<Student::ct<<endl; //can be directly accessed

// Student::print();

// return 0;
// }

// class Employee{
//     char name[100];
//     int id;
//     static int ct;

//     public:
//     void set(char * n,int r){
//         ct++;
//         strcpy(name,n);
//         id=r;
//     }

//     int get_id(){
//         return id;
//     }

//     char * get_name(){
//         return name;
//     }

//     static void get_counter(){
//         cout<<ct<<endl;
//     }
// };

// int Employee::ct //we can intialize it like int Employee::ct=100

// int main(){
//     Employee::get_counter();
//     return 0;
// }

// Constructor function ----------------------------------------------------------------------------
// a method in which is automatically called whenever an object is created
//  no return type and function name is same as class name
// helps during object contructor

// class Employee{
//     char name[100];
//     int id;
//     int age;
//     static int ct;

//     public:
//     Employee(char * n , int r,int ag){
//         cout<<"constructor is called"<<endl;
//         ct++;
//         strcpy(name,n);
//         id=r;
//         age=ag;
//     }

//     static void get_counter(){
//         cout<<ct<<endl;
//     }

//     void display(){
//         cout<<"name: "<<name<<" id: "<<id<<" age: "<<age<<endl;
//     }

// };

// int Employee::ct;

// int main(){
//     char a[100]="abc";
//     Employee e1(a,123,19); //instead of making set function we can pass values directly into constructor

//     e1.display();

//     Employee::get_counter();

//     return 0;
// }

// destructor --------------------------------------------------------------------------
//  class Employee{
//      char name[100];
//      int id;
//      int age;
//      static int ct;

//     public:
//     Employee(){
//         cout<<"constructor has been called"<<endl;
//     }

//     ~Employee(){
//         cout<<"destructor has been called"<<endl;

//     }

//     static void get_counter(){
//         cout<<ct<<endl;
//     }

//     void display(){
//         cout<<"name: "<<name<<" id: "<<id<<" age: "<<age<<endl;
//     }

// };

// int Employee::ct;

// int main(){
//     Employee e1;

//     cout<<"inside main"<<endl;

//     return 0;
// }

// friend ----------------------------------------------------------------------------------------------
//  class Complex{
//      int real;
//      int img;

//     public:
//     Complex(int r,int i){
//         real=r;
//         img=i;
//     }

//     void display(){
//         cout<<real<<" + "<<img<<" i"<<endl;
//     }

//     friend void addComplex(Complex,Complex); //to access private and protected part outside the class
//     friend void mulComplex(Complex,Complex);

// };

// void addComplex(Complex c1, Complex c2){
//     int new_real=c1.real+c2.real;
//     int new_img=c1.img+c2.img;

//     Complex ans(new_real,new_img);

//     ans.display();
// }

// void mulComplex(Complex c1, Complex c2){
//     int new_real=c1.real*c2.real-c1.img*c2.img;
//     int new_img=c1.real*c2.real+c1.img*c2.img;

//     Complex ans(new_real,new_img);

//     ans.display();
// }

// int main(){

//     Complex c1(1,2);

//     Complex c2(3,4);

//     mulComplex(c1,c2);

// }

// class Student
// {
//     char name[100];
//     int student_id;
//     int grade[5];

// public:
//     Student(char *n, int m, int *g)
//     {
//         strcpy(name, n);
//         student_id = m;
//         for(int i=0;i<5;i++){
//             grade[i]=g[i];
//         }
//     }

//     void displayInfo()
//     {
//         cout << "Name: " << name <<endl<< "student id: " << student_id<<endl<<"grade: " ;
//         for(int i=0;i<5;i++){
//             cout<<grade[i]<<" ";
//         }

//     }

//     friend class GradeBook;
// };

// class GradeBook{
//     public:
//     void computeAverage(Student student){
//         int sum=0;
//         for(int i=0;i<5;i++){

//             sum=sum+student.grade[i];
//         }

//         int avg=sum/5;

//         cout<<"Average: "<<avg<<endl;`  b 5
//     }
// };

// int main()
// {
//     char a[100] = "abc";
//     int b[5] = {1, 2, 3, 4, 5};
//     Student s1(a, 123, b);
//     s1.displayInfo();

//     GradeBook g1;
//     g1.computeAverage(s1);
// }


// class Second; //forward declaration

// class First{
//     int val;
//     public:
//     First(int v){
//         val=v;
//     }

//     friend void addFirstSecond(First,Second);
// };

// class Second{
//     int data;
//     public:
//     Second(int d){
//         data=d;
//     }
//     friend void addFirstSecond(First,Second);
// };

// void addFirstSecond(First f,Second s){
//     cout<<"val + data = "<<f.val+s.data<<endl;
// }

// int main(){
//     First f1(5);
//     Second s1(5);

//     addFirstSecond(f1,s1);

// }


// Q7- Write a program to multiply array A and B of order NxL and LxM ----------------------------------------
// int main(){
//     int r1,c1;
//     int r2,c2;

//     cout<<"Enter rows and cols for 1st matrix: ";
//     cin>>r1>>c1;

//     cout<<"Enter rows and cols for 2nd matrix: ";
//     cin>>r2>>c2;

//     int a[r1][c1];
//     int b[r2][c2];

//     cout<<"Enter values for 1st matrix: "<<endl;
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             cin>>a[i][j];
//         }

//     }

//     cout<<"Enter values for 2nd matrix: "<<endl;
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             cin>>b[i][j];
//         }

//     }

//     int c[r1][c2];

//     if(c1==r2){
//         for(int i=0;i<r1;i++){
//             for(int j=0;j<c2;j++){
//                 c[i][j]=0;
//                 for(int k=0;k<c1;k++){
//                     c[i][j]+=a[i][k]*b[k][j];

//                     cout<<a[i][k]*b[k][j]<<" ";
//                     cout<<c[i][j]<<endl;
//                 }

//             }
//         }
//     }

//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             cout<<c[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// class Car{
//     public:
//     char * name; 
//     int price;
//     int mileage;
//     int seats;

//     Car(){
//         cout<<"Default constructor called"<<endl;
//         name=NULL;
//         price=0;
//         mileage=0;
//         seats=0;
//     }

//     Car(char * n,int p){
//         cout<<"constructor called with name and price"<<endl;
//         name=new char[strlen(n)+1];
//         strcpy(name,n);
//         price=p;
//         mileage=0;
//         seats=0;
//     }


//     Car(char * n,int p,int m,int s){ //constructor with parameters
//         name=new char[strlen(n)+1];
//         strcpy(name,n);
//         price=p;
//         mileage=m;
//         seats=s;
//     }

//     Car(Car & X){
//         cout<<"copy const called"<<endl;
//         name=new char[strlen(X.name)+1];
//         strcpy(name,X.name);
//         price=X.price;
//         mileage=X.mileage;
//         seats=X.seats;
//     }

//     void display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Price: "<<price<<endl;
//         cout<<"Mileage: "<<mileage<<endl;
//         cout<<"Seats: "<<seats<<endl;
//     }

//     ~Car(){
//         cout<<"Destructor called"<<endl;
//         delete[] name;
//         name=NULL;
//     }

// };

// int main(){
//     char name[]="BMW";
//     Car c1(name,100000,10,5);

//     c1.display();
    
//     cout<<"-------------------------------------------"<<endl;
//     Car c2(c1);
//     c2.display();

//     cout<<"-------------------------------------------"<<endl;
//     Car c3=c1;
//     c3.display();

//     using heap memory instead of static memory
//     Car * C=new Car(name,100,2,1);
//     C->display();

//     delete C;
//     C=NULL;

//  } 

//Dynamic Constructor
// class Car{
//     public:
//     char * name; 
//     int * price;
//     int * mileage;
//     int * seats;

//     Car(char * n,int p,int m,int s){ //constructor with parameters
//         name=new char[strlen(n)+1];
//         strcpy(name,n);
//         price=new int(p);
//         mileage=new int (m);
//         seats=new int (s);
//     }

//     void display(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Price: "<<*price<<endl;
//         cout<<"Mileage: "<<*mileage<<endl;
//         cout<<"Seats: "<<*seats<<endl;
//     }

//     ~Car(){
//         cout<<"Destructor called"<<endl;
//         delete[] name;
//         name=NULL;
//     }

// };

// int main(){
//     char name[]="BMW";
//     int price=100;
//     int mileage=2;
//     int seats=1;
//     Car * C=new Car(name,price,mileage,seats);
//     C->display();
//  } 


//Operator Overloading
//redefining the behaviour of operators 

// class Complex{
//     public:
//     int real;
//     int imag;

//     Complex(int r,int i){
//         real=r;
//         imag=i;
//     }

//     Complex operator-(){
//         return Complex(-real,-imag);
//     }

//     Complex operator++(){ //pre increament
//         return Complex(++real,++imag);
//     }

//     Complex operator++(int){ //post
//         return Complex(++real,++imag);
//     }

    // Complex operator--(){ //pre decrement
    //     return Complex(--real,--imag);
    // }

    // Complex operator--(int){ //post dec
    //     return Complex(--real,--imag);
    // }


//     Complex operator+(Complex x){
//         int new_real=real+x.real;
//         int new_imag=imag+x.imag;
//         Complex ans=Complex(new_real,new_imag);
//         return ans;
//     }

//     Complex operator-(Complex x){
//         int new_real=real-x.real;
//         int new_imag=imag-x.imag;
//         Complex ans=Complex(new_real,new_imag);
//         return ans;
//     }

//     Complex operator*(Complex x){
//         int new_real=real*x.real-imag*x.imag;
//         int new_imag=real*x.real+imag*x.imag;
//         Complex ans=Complex(new_real,new_imag);
//         return ans;

//     }

//     void display(){
//         if(imag<0){
//             cout<<real<<" "<<imag<<"i"<<endl;    
//         }
//         else{
//             cout<<real<<"+"<<imag<<"i"<<endl;    
//         }
//     }

// };

// int main(){

//     Complex c1(2,4);
//     Complex c2(1,2);
//     cout<<"c1: ";
//     c1.display();
//     cout<<endl<<"c2: ";
//     c2.display();
//     Complex c3=c1*c2; // Complex c3=c1.Complex operator(c2);
//     cout<<endl<<"c3: ";
//     c3.display();


// }

// class Matrix{
//     int row,col;
//     int mat[100][100];

//     public:
//     Matrix(int r,int c,int m[100][100]){
//         row=r;
//         col=c;
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 mat[i][j]=m[i][j];
//             }
//         }
//     }


// };

// int main(){
//     int mat1[100][100];
//     int mat2[100][100];
//     int row1,row2,col1,col2;

//     cin>>row1>>col1;

//     for(int i=0;i<row1;i++){
//         for(int j=0;j<col1;j++){
//             cin>>mat1[i][j];
//         }
//     }
// }

// class Matrix{
//     int rows,col;
//     int mat[100][100];
// public:
//      Matrix(int r,int c,int m[100][100]){
//         rows=r;
//         col=c;
//         for(int i=0;i<rows;i++){    
//             for(int j=0;j<col;j++){
//                 mat[i][j]=m[i][j];
//             }
//         }
//      }
//      Matrix operator+(Matrix m){
//         int res_mat[100][100];
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<col;j++){
//                 res_mat[i][j]=mat[i][j]+m.mat[i][j];
//             }
//         }
//         return Matrix(rows,col,res_mat);
//      }
//      void display(){
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<col;j++){
//                 cout<< mat[i][j]<<'\t';
//             }
//             cout<<endl;
//         }
//      }
// };
// int main(){
//     int mat1[100][100];
//     int mat2[100][100];
//     int rows1,rows2,col1,col2;
//     cin>>rows1>>col1;
//     for(int i=0;i<rows1;i++){
//         for(int j=0;j<col1;j++){
//             cin>>mat1[i][j];
//         }
//     }
//     Matrix m1(rows1,col1,mat1);
//     cin>>rows2>>col2;
//     for(int i=0;i<rows2;i++){
//         for(int j=0;j<col2;j++){
//             cin>>mat2[i][j];
//         }
//     }
//     Matrix m2(rows2,col2,mat2);
//     Matrix ans =m1+m2;
//     ans.display();
//     return 0;
// }


// Operator overloading to find the index of an element in an array

// class A{
//     int * arr;

//     public:
//     A(){
//         arr=new int[10];
//         for(int i=0;i<10;i++){
//             arr[i]=i;
//         }
//     }

//     int operator[](int index){
//         return arr[index];
//     }
// };

// int main(){
//     A obj;
//     cout<<obj[4]<<endl;
// }


// add time using operator overloading
// #define dbg(x) cout << #x << " " << x <<endl;
// class Time{
//     int hour,min,sec;

//     public:
//     Time(int h,int m,int s){
//         hour=h;
//         min=m;
//         sec=s;
//     }

//     Time operator+(Time t){
//         int new_sec=t.sec + sec;
//         int carry=new_sec/60;
//         new_sec=new_sec%60;
//         // dbg(new_sec);

//         int new_min=t.min +min +carry;
//         carry=new_min/60;
//         new_min=new_min%60;
//         // dbg(new_min);
//         int new_hour=t.hour +hour+carry;
//         new_hour=new_hour%24;

//         return Time(new_hour,new_min,new_sec);

//     }

//     void display(){
//         cout<<hour<<" : "<<min<<" : "<<sec<<endl;
//     }
// };

// int main(){
//     Time t1(11,59,59);
//     t1.display();

//     Time t2(12,59,59);
//     t2.display();

//     Time t3=t1+t2;
//     t3.display();

// }



// Inhertitance 

// class Employee{
//     public:
//     int id;
//     char name[100];
// };

// class Manager : public Employee { //by default class is private
//     public:
//     char departement[100];

//     void set_data(int i,char * n,char * d){
//         id=i;
//         strcpy(name,n);
//         strcpy(departement,d);
//     }

//     void display(){
//         cout<<"ID: "<<id<<endl<<
//         "Name: "<<name<<endl<<
//         "Departement: "<<departement<<endl;
//     }

// };

// int main(){
//     Manager m1;
//     char name[100]="Jasjeet";
//     char departement[100]="Manager";
//     m1.set_data(1,name,departement);
//     m1.display();
// }

//     base class      public      private     protected
//     public          public      private     private          
//     private            -            -           -
//     protected       protected   private     protected


// class Vehicle{
//     protected:
//     char company[100];
//     int wheels;

// };

// class Car : private Vehicle{
//     int mileage;
//     public:

//     void set_data(char * c,int w,int m){
//         strcpy(company,c);
//         wheels=w;
//         mileage=m;
//     }

//     void display(){
//         cout<<"Company: "<<company<<endl<<
//         "No. of wheels: "<<wheels<<endl<<
//         "Mileage: "<<mileage<<endl;
//     }

// };

// int main(){
//     Car c1;
//     char company[100]="BMW";
//     c1.set_data(company,4,1);

//     c1.display();
// }


//Multiple Inheritance
// (derived from 2 or more base class)

// class A{
//     public:
//     void show_a(){
//         cout<<"A"<<endl;
//     }
// };

// class B{
//     public:
//     void show_b(){
//         cout<<"B"<<endl;
//     }
// };

// class C:public A, public B{
//     public:
//     void show_c(){
//         cout<<"C"<<endl;
//     }
// };

// int main(){
//     C obj1;
//     obj1.show_a();
//     obj1.show_b();
//     obj1.show_c();
// }

//Multilevel inheritance
// (one class is inherited from other which is further inheritated from some other class)

// class A{
//     public:
//     void show_a(){
//         cout<<"A"<<endl;
//     }
// };

// class B: public A{
//     public:
//     void show_b(){
//         cout<<"B"<<endl;
//     }
// };

// class C: public B{
//     public:
//     void show_c(){
//         cout<<"C"<<endl;
//     }
// };

// int main(){
//     C obj1;
//     obj1.show_a();
//     obj1.show_b();
//     obj1.show_c();
// }


// Her. inheritance
// (like a tree)

// class A{
//     public:
//     void show_a(){
//         cout<<"A"<<endl;
//     }
// };

// class B: public A{
//     public:
//     void show_b(){
//         cout<<"B"<<endl;
//     }
// };

// class C:public A{
//     public:
//     void show_c(){
//         cout<<"C"<<endl;
//     }
// };

// int main(){
    // A obja;
    // B objb;
    // C objc;
//     // for class A
//     obja.show_a();

//     // for class B
//     objb.show_a();
//     objb.show_b();

//     // for class C
//     objc.show_a();
//     objc.show_c();
// }


//Hybrid Inheritance
// (combination)

// class A{
//     public:
//     void show_a(){
//         cout<<"A"<<endl;
//     }
// };

// class B: public A{
//     public:
//     void show_b(){
//         cout<<"B"<<endl;
//     }
// };

// class D{
//     public:
//     void show_d(){
//         cout<<"D"<<endl;
//     }
// };

// class C:public B,public D{
//     public:
//     void show_c(){
//         cout<<"C"<<endl;
//     }
// };



// int main(){
//     A obja;
//     B objb;
//     C objc;
//     D objd;

//     cout<<"for class A"<<endl;
//     obja.show_a();

//     cout<<"for class B"<<endl;
//     objb.show_a();
//     objb.show_b();

//     cout<<"for class C"<<endl;
//     objc.show_a();
//     objc.show_b();
//     objc.show_c();
//     objd.show_d();

//     cout<<"for class D"<<endl;
//     objd.show_d();
// }


// class A{
//     public:
//     void show(){
//         cout<<"A";
//     }
// };

// class B{
//     public:
//     void show(){
//         cout<<"B";
//     }
// };

// class C: public A, public B{
//     void display(){
//         cout<<"c"<<endl;
//     }
// };

// int main(){
//     C obj1;
//     obj1.show(); //give ambiguous error as show is present in both class A and class B

// }



/*Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which 
inherits both the above classes. Now, create a function in each of these classes which prints 
"I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well as
 Marine Animals" respectively. Now, create an object for each of the above class and try calling 

1 - function of Mammals by the object of Mammal 

2 - function of MarineAnimal by the object of MarineAnimal 

3 - function of BlueWhale by the object of BlueWhale 

4 - function of each of its parent by the object of BlueWhale */

// class Mammals{
//     public:
//     void dis_mam(){
//     cout<<"I am mammal"<<endl;
//     }
// };

// class MarineAnimals{
//     public:
//     void dis_mar(){
//     cout<<"I am a marine animal"<<endl;
//     }
// };

// class BlueWhale: public Mammals, public MarineAnimals{
//     public:
//     void dis_whale(){
//         cout<<"I belong to both the categories: Mammals as well as Marine Animals"<<endl;
//     }
// };

// int main(){
//     Mammals m1;
//     m1.dis_mam();

//     MarineAnimals m2;
//     m2.dis_mar();

//     BlueWhale b1;
//     b1.dis_whale();

//     b1.dis_mam();
//     b1.dis_mar();
// }

// hybrid Inheritance 
// class A{
//     public:
//     void f1(){
//         cout<<"f1 inside A";
//     }
// };

// class B : public A{

// };

// class C : public A{

// };

// class D : public B, public C{

// };

// int main(){
//     A a1;
//     B b1;
//     C c1;
//     D d1;

//     b1.f1();
//     d1.f1();
// }


// class Fruit{
//     public:
//     int total_fruits;
//     Fruit(){
//         total_fruits=0;
//     }

//     void add_fruits(){
//         total_fruits++;
//     }

//     void get_fruits(){
//         cout<<"Total fruits: "<<total_fruits<<endl;
//     }
// };

// class Apple : public Fruit{
//     public :
//     int total_apple;
//     Apple(){
//         total_apple=0;
//     }

//     void add_apples(){
//         total_apple++;
//         add_fruits();
//     }

//     void get_apples(){
//         cout<<"Total apples: "<<total_apple<<endl;
//     }
// };


// class Mango: public Fruit {
//     public :
//     int total_mango;
//     Mango(){
//         total_mango=0;
//     }

//     void add_mango(){
//         total_mango++;
//         add_fruits();
//     }

//     void get_mango(){
//         cout<<"Total Mangoes: "<<total_mango<<endl;
//     }

// };

// int main(){
//     //Fruit f1;
//     Apple a1;
//     Mango m1;

//     a1.add_apples();
//     m1.add_mango();
//     a1.get_apples();
//     m1.get_mango();
//     m1.add_mango();
//     //a1.get_fruits();
//     m1.get_fruits();

//     cout<<"Total Fruits(mango+apples): " 

// }


// class A{
//     public:
//     A(){
//         cout<<"Const. A"<<endl;
//     }
// };

// class B: public A{
//     public:
//     B(){
//         cout<<"Const. B"<<endl;
//     }
//     B(int x){
//         cout<<"Para. constructor"<<endl;
//     }
// };

// class C: public B{
//     public:
//     C():B(3){
//         cout<<"Const. C"<<endl;
//     }
// };

// int main(){
//     C c1;

// }

// 47

// class A{
//     public:
//     void f(){
//         cout<<"A"<<endl;
//     };
// };

// class B{
//     public:
//     void f(){
//         cout<<"B"<<endl;
//     }
// };

// class C{
//     public:
//     // void f(){ // function overwritting of f in c
//     //     cout<<"C";
//     // }
// };

// int main(){
//     C c1;
//     c1.f();
// }

//TYPE CONVERSION

//Basic to class type
// class A{
//     char a;
//     public:
//     A(char aa){
//         a=aa;
//     }

//     void display(){
//         cout<<"A: "<<a<<endl;
//     }
// };

// int main(){
//     A a('b');
//     A aa='c'; //implicit conversion
//     a.display();
//     aa.display();
// }

// class to basic type

// class Rectangle{
//     public:
//     int length;
//     int width;

//     Rectangle(int l,int w){
//         length=l;
//         width=w;
//     }

//     operator int(){
//         return length*width;
//     }

//     operator double(){
//         return length*width*1.11;
//     }


// };

// int main(){
//     Rectangle r(2,3);
//     int x=r;
//     double y=r;
//     cout<<x<<endl;
//     cout<<y<<endl;
//     return 0;
// }


//class to class type

// class A{
//     public:
//     int x;
//     int y;

//     A(int xx,int yy){
//         x=xx;
//         y=yy;
//     }

//     void display(){
//         cout<<"A: "<<x<<" "<<y<<endl;
//     }
// };

// class B{
//     public:
//     int m;
//     int n;

//     B(int mm,int nn){
//         m=mm;
//         n=nn;
//     }

//     void display(){
//         cout<<"B: "<<m<<" "<<n<<endl;
//     }

//     void operator = (A a){
//         m=a.x;
//         n=a.y;
//     }
// };

// int main(){
//     A a(1,2);
//     B b(2,3);

//     b=a;//Operator overloading

//     a.display();
//     b.display();
// }


// class Time{
//     int hours;
//     int minutes;

//     public:

//     Time(int min){
//         hours=min/60;
//         minutes=min%60;
//     }

//     void display(){    
//         cout<<hours<<" : "<<minutes;
//     }

//     operator int (){
//         return hours*60 + minutes;
//     }
// };

// int main(){
//     Time t=144; //Basic to class
//     t.display();

//     int x=t; // Class to basic 
//     cout<<endl<<x<<endl;  

// }

// class Distance{
//     public:

//     int kilometer;
//     int meter;

//     Distance(int k,int m){
//         kilometer=k;
//         meter=m;
//     }

//     operator int(){
//         return kilometer*1000 + meter;
//     }

//     void display(){
//         cout<<kilometer<<" "<<meter;
//     }

// };

// int main(){
//     Distance d(1,2);
//     int meters=d;
//     cout<<meters<<endl;
// }

// class A{
//     public:
//     A(){
//         cout<<"A";
//     }
// };

// class B:public A{
//     public:
//     B(){
//         cout<<"B";
//     }
// };

// class C: public A{
//     public:
//     C(){
//         cout<<"C";
//     }
// };


// class D: public B, public C{
//     public :
//     D()virtual A{
//         cout<<"D"<<endl;
//     }
// };

// int main(){
//     D d;
// }


// VIRTUAL FUNCTIONS --------------------------------------------------------------------------------
// class A{
//     public: 
//     virtual void display(){ //for dynamic(runtime)(late-binding) linking (just write virtual in base class)
//     // without virtual - compile time, static binding, early binding
//         cout<<"Class A"<<endl;
//     }
// };

// class B: public A{
//     public:
//     void display(){
//         cout<<"Class B"<<endl;
//     }
// };

// class C: public B{
//     public:
//     void display(){
//         cout<<"Class C"<<endl;
//     }
// };

// int main(){
//     A * aptr; // you can store address of other class lower than A in a pointer in herar. inheritance
//     C obj1;

//     aptr = &obj1;

//     // (*aptr).display();
//     // aptr->display();
// }

// PURE VIRTUAL FUNCTIONS (have no defintion) ------------------------------------------------------
// class A{
//     public: 
//     virtual void display()=0;
// };

// class B: public A{
//     public:
//     void display(){
//         cout<<"Class B"<<endl;
//     }
// };

// int main(){
//     B obj;
//     obj.display();

// }


// Abstract class (atleast one pure virtual funvtions) -----------------------------------------------------
// Class A is abstract class with atleast 1 pure virtual function and u cant create its object

// class A{
//     public: 
//     virtual void display() = 0;

//     void func(){
//         << "Function i A"<<endl;
//     }
// };

// class B: public A{
//     public:
//     void display(){
//         cout<<"Class B"<<endl;
//     }
// };

// int main(){
//     B obj;
//     obj.display();

// }

/* virtual void display() = 0; = pure virtual class with no defination 
   void display(){
       
    } = empty class but has a defination
*/

// class Shape{
//     public:
//     virtual void calcArea()=0;
// };

// class Circle:public Shape{
//     public:
//     int radius;
//     Circle(int r){
//         radius=r;
//     }
//     void calcArea(){
//         cout<<"Area: "<<3.14*radius*radius<<endl;
//     }
// };

// class Square: public Shape{
//     public:
//     int side;
//     Square(int s){
//         side=s;
//     }
//     void calcArea(){
//         cout<<"Area: "<<side*side<<endl;
//     }
// };

// int main(){
//     Circle c1(1);
//     c1.calcArea();

//     Square s1(1);
//     s1.calcArea();

// }


// VIRTUAL DESTRUCTOR -------------------------------------------------
// class A{
//     public:
//     A(){
//         cout<<"Const. A"<<endl;
//     }

//     virtual ~A(){ // if we dont do this only the class to which the pointer is pointing will be deleted 
//         cout<<"Dest. A"<<endl;
//     }
// };

// class B: public A{
//     public:
//     B(){
//         cout<<"Const. B"<<endl;
//     }

//     ~B(){
//         cout<<"Dest. B"<<endl;
//     }
// };

// int main(){
//     A * aptr = new B();
//     delete aptr;
//     return 0;
// }

// Method Hiding----------------------------------------------
// class A{
//     public :
//     void func(){
//         cout<<"Function inside A"<<endl;
//     }
// };

// class B: public A{
//     public :
//     void func(int x){
//         cout<<"Function inside B"<<endl;
//     }

// };

// int main(){
//     A obj1;
//     obj1.A::func();
//     obj1.func();
// }


//POLYMORPHISUM-------------------------------------------------------------------------------
// (many forms)

// TYPE 1 -> Method Overloading -> runtime polymorph.
// class Rectangle{
//     public:
//     int length;
//     int breadth;
//     void set(int l,int b){
//         length=l;
//         breadth=b;
//     }

//     void set(int l){
//         length=l;
//         breadth=l;
//     }

//     void display(){
//         cout<<"Length: "<<length<<" Breadth: "<<breadth<<endl;
//     }
// };

// int main(){
//     Rectangle r1;
//     r1.set(1,2);
//     r1.display();

//     Rectangle r2;
//     r2.set(2);
//     r2.display();
// }


// Type 2 -> Operator Overloading ->runtime polymorph.

// class Complex{
//     public:
//     int real,imag;

//     Complex(int r,int i){
//         real=r;
//         imag=i;
//     }

//     Complex operator+(Complex &X){
//         int new_real=real+X.real;
//         int new_imag=imag+X.imag;

//         return Complex(new_real,new_imag);
//     }

//     void display(){
//         cout<<real<< " + "<<imag;
//     }

// };


// Type 3 -> Overwritting -> run-time polymorp.

// class A{
//     public:
//     virtual void show(){
//         cout<<"From A"<<endl;
//     }
// };

// class B: public A{
//     public:
//     void show(){
//         cout<<"From B"<<endl;
//     }
// };

// int main(){
//     A * aptr;
//     B obj1;
//     aptr = &obj1;
//     aptr->show();
// }

//Exception Handling -----------------------------------------------------

// int main(){
//     int a,b;
//     cin>>a>>b;

//     try{
//         if(b==0){
//             throw "division by 0";
//         }

//         if(b==1){
//             throw "division by 1";
//         }
//         cout<<"a/b: "<<a/b<<endl;
//     }

//     catch(double e){ //depends on the thrown type which catch will work
//         cout<<"Exception thrown of type: "<<e<<endl;
//     }
//     catch(int e){
//         cout<<"Exception thrown of type: "<<e<<endl;
//     }
//     catch (const char *e){
//         cout<<"Exception thrown of type: "<<e<<endl;;
//     }

//     catch(...){ //ellipsis -> for all other exceptions
//         cout<<"Undefined exception caught"<<endl;
//     }

//     cout<<"After exception handling"<<endl;

//     return 0;
// }

// int main(){
//     int a[10];
//     for(int i=0;i<10;i++){
//         cin>>a[i];
//     }

//     int idx;
//     cin>>idx;

//     try{
//         if(idx>=10){
//             throw "Index out of Bounds";
//         }

//         if(idx<=-1){
//             throw "Index less than 0";
//         }

//         cout<<"At index "<<idx<<" value is: "<<a[idx]<<endl;
//     }

    // catch (const char *e){
    //     cout<<"Excpetion thrown is: "<<e<<endl;
    // }
// }


// void func3(){
//     cout<<"Inside function 3"<<endl;
//     throw "Exception in function 3";
// }
// void func2(){
//     cout<<"Inside function 2"<<endl;
//     func3();
// }
// void func1(){
//     cout<<"Inside function 1"<<endl;
//     func2();
// }

// int main(){
//     try{
//         func1();
//     }

//     catch(int e){
//         cout<<"Exception int caught: "<<e<<endl;
//     }

//     catch (const char *e){
//         cout<<"Excpetion char caught: "<<e<<endl;
//     }

//     cout<<"Done"<<endl;
// }


// int func2(int a,int b){
//     try{
//         if(b==0){
//             throw "Division by 0";
//         }

//         return a/b;
//     }

//         catch(char *e){
//             throw;
//         }

// }
// int func1(int a,int b){
//     try{
//         return a+b - func2(a,b);
//     }
    
//     catch(char * e){
//         throw;
//     }
// }

// int main(){
//     int a,b;
//     cin>>a>>b;

//     try{
//         cout<<func1(a,b)<<endl;
//     }

//     catch (const char *e){
//         cout<<"Excpetion thrown is: "<<e<<endl;
//     }
// }


// Template --------------------------------------------------------------------------

// template <typename T>
// class A{
//     public:
//     T value;
//     A(T val){
//         value=val;
//     }

//     void display(){
//         cout<<"Value: "<<value<<endl;
//     }
// };

// template <typename T> //Every function is made into template seperatly
// T func(T a,T b){
//     return a+b;
// }

// int main(){
//     // cout<<func(1,2)<<endl;

//     // string a="abc";
//     // string b="def";
//     // cout<<func(a,b)<<endl;

//     A<int> a(1);
//     a.display();
// }


// STL -----------------------------------------------------------------------------------------------------

// int main(){
//     vector <int> vec(20);
//     vec.push_back(1); //push_back add elemts to the end of the array -> here 1 is placed at 21th block
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     cout<<vec.capacity()<<endl; //to find the capacity of the vector(elements in the store)
//     cout<<vec.size()<<endl; //to find the number of elements present in the vector
//     for(int i=0;i<vec.size();i++){
//         cout<<vec[i]<<" ";
//     }

//     vec.pop_back(); // removes element from the end;
//     vec.pop_back(); 
//     cout<<endl;
//     for(int i=0;i<vec.size();i++){
//         cout<<vec[i]<<" ";
//     }

//     cout<<endl<<vec.back()<<endl; //gives element present at the end


//     cout<<vec.empty()<<endl; //gives element present at the end

//     // cout<<vec.clear()<<endl; //clears the vector

// }

  

// int main(){

    // when u use an array
    // int a[3]; //[int,int,int]
    // vector<int> arr[3]; //[vector<int>,vector<int>,vector<int>]

    // int val=1;
    // for(int i=0;i<3;i++){
    //     // arr[i] -> veactor;

    //     for(int j=0;j<3;j++){
    //         arr[i].push_back(val);
    //         val++;
    //     }
    // }

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // when u take a vector
    // int row,col;
    // cin>>row>>col;

    // int val=1;

    // vector <vector<int>> vec;
        // (when u want to give it size 3,3
        // vector <vector <int>> vec(3,vector<int>(3)))

    // for(int i=0;i<row;i++){
    //     vector <int> temp;

    //     for(int j=0;j<col;j++){
    //         temp.push_back(val);
    //         val++;
    //     }

    //     vec.push_back(temp);
    // }

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
// }

// ITERATOR ---------------------------------------------------------------------------------------

// int main(){
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);

//     vector<int> :: iterator it; // -> auto it=vec.begin()

    // cout<<*it<<endl;
    // cout<<*it+1<<endl;
    // cout<<*it+2<<endl;
    // cout<<*it+3<<endl;
    // cout<<*it+4<<endl;

    // for(it=vec.begin();it!=vec.end();it++){
    //     cout<< *it <<endl;
    // }
    

    // for(auto &i:vec){ //int i == auto i
    //     cout<< i <<endl;
    //     i++;
    // }

    // cout<<endl;
    // for(auto i:vec){ //int i == auto i
    //     cout<< i <<endl;
    // }

// }

// LISTS --------------------------------------------------------------
// int main(){
//     list<int> l;

//     l.push_back(1); //add elements at the end
//     l.push_back(2);
//     l.push_back(2);
//     l.push_back(4);

//     l.push_front(5); // add elements at the front
//     l.push_front(6);

//     list <int> :: iterator it;

//     for(it=l.begin();it!=l.end();it++){
//         cout<< *it <<" ";
//     }

//     cout<<endl;

//     auto it1=l.begin();
//     // for(;it1!=l;it1++){
//     //     cout<< *it1 <<" ";
//     // }

//     //cout<<endl;
//     l.pop_back();
//     l.pop_front();

//     for(auto value : l){
//         cout<<value<<" ";
//     }

//     cout<<endl;

//     cout<<"List empty: "<<l.empty()<<endl; //checking if list is empty

//     cout<<l.front()<<" "<<l.back()<<endl;

//     l.clear(); //removing all the elements of the list
//     cout<<"List empty: "<<l.empty()<<endl;


// }


//DEQUE ----------------------------------------------------------------------------------------------
// int main(){
//     deque<int> dq;

//     dq.push_back(1);
//     dq.push_back(2);
//     dq.push_back(3);
//     dq.push_back(4);

//     dq.push_front(5);
//     dq.push_front(6);

//     for(auto value : dq){
//         cout<< value <<" ";
//     }

//     cout<<endl;

//     cout<<dq.front()<<" "<<dq.back()<<endl;
// }

// ------------------------------- ASSOCIATIVE CONTAINERS -------------------------------------------------------------------------

// SET -------------------------------------------
// output is always in sorted order and when u insert duplicates it just takes 1 value
// int main(){
//     set <int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(5);

//     for(auto value: s){
//         cout<<value<<" ";
//     }

//     cout<<endl;

//     s.erase(2); //removes element
//     for(auto value: s){
//         cout<<value<<" ";
//     }

//     cout<<endl;

//     cout<<"Count: "<<s.count(3)<<endl;

//     //removing element through iterator
//     set<int> :: iterator it=s.begin();
//     it++;
//     it++;
//     s.erase(it);
// }


//MULTISET -----------------------------------------------------------------
// int main(){
//     multiset<int> ms;
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(3);
//     ms.insert(3);
//     ms.insert(100);

//     for(auto value: ms){
//         cout<<value<<" ";
//     }

//     cout<<endl;

//     ms.erase(1); //removes all the occurence of 1 in multiset
//     for(auto value: ms){
//         cout<<value<<" ";
//     }
//     cout<<endl;

//     // to remove a single occurence of 3
//     multiset<int> :: iterator it=ms.begin();
//     for( ;it!=ms.end();it++){
//         if(*it==3){
//             break;
//         }
//     }

//     ms.erase(it);
//     for(auto value: ms){
//         cout<<value<<" ";
//     }
// }


// PAIR -----------------------------------------------------------
// int main(){
//     pair<int,string> p;
//     p.first=6;
//     p.second="abc";
//     cout<<p.first<<" "<<p.second<<endl;

//     pair<int,int> p1=make_pair(1,2);
//     cout<<p1.first<<" "<<p1.second<<endl;

// }


// MAP ---------------------------------------------------------------------------
//     it has a key and value

// int main(){
//     map <int,string> m;
//     m[1]="abc";
//     m[2]="def";
//     m[0]="mno";

//     m.insert(make_pair(3,"qwe"));

//     m.insert({4,"zxc"}); // there can be only 1 key with 4
//     m.insert({4,"ghj"});

//     for(auto value: m){ //comes in sorted order
//         cout<<value.first<<" "<<value.second<<endl;
//     }

//     //erasing through key
//     map<int,string> :: iterator it=m.begin();

//     for( ; it!=m.end();it++){
//         if(it->first==2){
//             break;
//         }
//     }

//     m.erase(it);

//     cout<<endl;
//     for(auto value: m){ 
//         cout<<value.first<<" "<<value.second<<endl;
//     }


//     //erasing through value
//     map<int,string> :: iterator it1=m.begin();

//     for( ; it1!=m.end();it1++){
//         if(it1->second=="qwe"){
//             break;
//         }
//     }

//     m.erase(it1);

//     cout<<endl;
//     for(auto value: m){ 
//         cout<<value.first<<" "<<value.second<<endl;
//     }
// } 


// MULTIMAP -----------------------------------
// int main(){
//     multimap <int,string> m;

//     m.insert(make_pair(1,"abc"));
//     m.insert(make_pair(2,"qwe"));
//     m.insert(make_pair(3,"qwe"));
//     m.insert({4,"zxc"}); 
//     m.insert({4,"ghj"});

//     for(auto value: m){ //comes in sorted order
//         cout<<value.first<<" "<<value.second<<endl;
//     }

// }

//STACKS --------------------------------------------------------
// int main(){
//     stack<int> s;

//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);

//     //cout<<s.empty();

//     // s.pop(); //pop the elements on the top

//     // s.top(); //gives the elements on the top

//     while(s.empty()==0){
//         cout<<s.top()<<" ";
//         s.pop();

//     }

// }


// QUEUES --------------------------------------------------
// int main(){
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);

//     while(q.empty()==0){
//         cout<< q.front() << " ";
//         q.pop();
//     }
// }

// PRIORITY QUEUES ----------------------------------------------------
// int main(){
//     priority_queue<int> p;

//     p.push(100);
//     p.push(-1);
//     p.push(88);
//     p.push(-11);

//     while(p.empty()==0){
//         cout<<p.top()<<endl;
//         p.pop();
//     }

// }

//SORT an array using priority queue ----------------------------------------------
// int main(){
//     priority_queue<int> p;

    // int n;
    // cin>>n;

    // int a[100];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }

    // for(int i=0;i<n;i++){
    //     p.push(a[i]);
    // }

    // int i=n-1;
    // while(p.empty()==0){
    //     a[i]=p.top();
    //     cout<<p.top()<<" ";
    //     p.pop();
    //     i--;
    // }

    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
// }

//MINIMUM PQ 
// int main(){
//     priority_queue<int, vector<int>,greater<int>> p;
//     int n;
//     cin>>n;

//     int a[100];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     for(int i=0;i<n;i++){
//         p.push(a[i]);
//     }

//     while(p.empty()==0){
//         cout<<p.top()<<" ";
//         p.pop();
//     }

// }


// OTHER FUNCTIONS ------------------------------------------------------
// int main(){
//     vector<int> a;
//     a.push_back(2);
//     a.push_back(-1);
//     a.push_back(10);
//     a.push_back(0);
//     a.push_back(2);
//     a.push_back(2);

//     // SORT-------------
//     sort(a.begin(),a.end()); //excludes the end

//     for(auto value: a){
//         cout<<value<<" ";
//     }
//     cout<<endl;

//     // REVERSE ---------
//     reverse(a.begin(),a.end());
//     for(auto value: a){
//         cout<<value<<" ";
//     }
//     cout<<endl;

//     //COUNT ----------
//     cout<<"NO. of occurences: "<<count(a.begin(),a.end(),2)<<endl;

//     // COUNTF
//     //cout<<"NO. of occurences: "<<count(a.begin(),a.end(),2)<<endl;

//     //FIND
//     auto it= find(a.begin(),a.end(),2);
//     if(it==a.end()){
//         cout<<"2 not found";
//     }
//     else{
//         cout<<"2 found";
//     }
// }



















