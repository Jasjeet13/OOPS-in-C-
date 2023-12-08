#include <iostream>
#include <cstring>
using namespace std;

/* BINARY OPERATOR OVERLOADING ---------------------------------------------------------------------

QUESTION -> Create a class named Matrix to represent a 2D matrix of integers.
 Implement the following functionalities using constructor overloading:

1> A default constructor that initializes the matrix as a 3x3 identity matrix.

2> A parameterized constructor that takes the number of rows and columns as arguments and initializes the matrix with 
random values between 1 and 100.

3> A copy constructor that creates a deep copy of an existing Matrix object.

4> An overloaded constructor that takes a 2D array of integers and initializes the matrix with its values.

5> Overload the '+' operator to add two Matrix objects.

6> Overload the '*' operator to multiply two Matrix objects.

7> Overload the '==' operator to check if two Matrix objects are equal.

class Matrix{
    public:
    int arr[100][100];
    int row;
    int col;

    Matrix(){
        row=3;
        col=3;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i==j){
                    arr[i][j]=1;
                }
                else{
                    arr[i][j]=0;
                }
            }
        }
    }

    Matrix(int r,int c){
        row=r;
        col=c;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr[i][j]=j;
            }
        }
    }

    Matrix(int rows,int cols,int a[100][100]){
        row=rows;
        col=cols;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr[i][j]=a[i][j];
            }
        }
    }

    Matrix operator+(Matrix m){
        int mat[100][100];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                mat[i][j]=arr[i][j]+m.arr[i][j];
            }
        }

        return Matrix(row,col,mat);
    }

    Matrix operator*(Matrix m){
        int mat[100][100];
        for(int i=0;i<row;i++){
            for(int j=0;j<m.col;j++){
            mat[i][j]=0;
                for(int k=0;k<col;k++){
                    mat[i][j]+=arr[i][k]*m.arr[k][j];
                }
            }
        }

        return Matrix(row,m.col,mat);

    }

    int operator==(Matrix m){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(arr[i][j]!=m.arr[i][j]){
                    return 0;
                }
            }
        }
        return 1;
    }

    void display(){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
};

int main(){
    Matrix m1;
    m1.display();

    cout<<endl;

    Matrix m2;
    m2.display();
    cout<<endl;

    // int ans= m1==m2;
    // cout<<ans<<endl;

    Matrix m3;
    m3=m1*m2;
    m3.display();
    cout<<endl;

}


QUESTION -> In a wizardry school, students are learning to use magical wands. Design a class MagicWand
with attributes like the wand's core material and length.
Overload the + operator to combine two wands, creating a more powerful wand with a longer
length.
Test Case:
Input: Wand1 - Core Material = "Phoenix Feather", Length = 10 inches
Wand2 - Core Material = "Dragon Heartstring", Length = 8 inches
Output: A combined wand with core material "Phoenix Feather" and length 18 inches.

class MagicWand{
    public:
    char core[100];
    int length;

    MagicWand(char * c,int l){
        strcpy(core,c);
        length=l;
    }

    void operator+(MagicWand m){
        cout<<"A combined wand with core material "<<core<<" and length " <<length+m.length<<" inches.";
    }

};

int main(){
    char core1[]="Phoenix Feather";
    char core2[]="Dragon Heartstring";
    MagicWand m1(core1,10);
    MagicWand m2(core2,18);

    m1+m2;

}


QUESTION -> In an adventurous treasure hunt game, players have a map with their current position. 
Design a class TreasureMap with coordinates. Overload the + operator to combine two maps, creating a
larger map with combined coordinates.
Test Case:
Input: Map1 - Coordinates (x=30, y=40)
Map2 - Coordinates (x=20, y=15)
Output: A combined map with coordinates (x=50, y=55).

*/

class TresureMap{
    public:
    int x;
    int y;

    TresureMap(int X,int Y){
        x=X;
        y=Y;
    }

    TresureMap operator+(TresureMap t){
        return TresureMap(x+t.x,y+t.y);
    }

    void display(){
        cout<<"Map - Coordinates (x="<<x<<", y="<<y<<")"<<endl;

    }
};

int main(){
    TresureMap t1(30,40);
    t1.display();
    TresureMap t2(20,15);
    t2.display();
    TresureMap t3=t1+t2;
    t3.display();

}