#include<iostream>
using namespace std;

class Complex{
    int a , b;
    public:

   Complex(int x , int y);  // Constructor declaration

   void printNumber(){
    cout<<"The complex number is "<<a <<"+"<<b<<"i"<<endl;
   }
};
Complex :: Complex(int x , int y) // ----> This is a Parameterized constructor as it takes 2 parameters
{
    a  = x;
    b = y;
// cout<<"Hello world";

}

int main() {
    //Implicit call
    Complex a(2,6);

    //Explicit call
    Complex b = Complex(5,7);

    a.printNumber();
    b.printNumber();

}
