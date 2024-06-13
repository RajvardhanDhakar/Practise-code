#include<iostream>
using namespace std;

// classes are the custom data type
class Complex{
    int a , b;
    public:
    // Creating a constructor
    //Constructor is a special member function with the  same name as of the class.
    //It is used to initialize the object of its class.
    // It is autimatically invoked(call karna) whenever an object is created.
   // Constructor mein koi return type nahi hota.
   Complex(void);  // Constructor declaration

   void printNumber(){
    cout<<"The complex number is "<<a <<"+"<<b<<"i"<<endl;
   }
};

Complex :: Complex(void) // ----> This is a default constructor as it accepts no parameters
{
    a  = 10;
    b = 9;
// cout<<"Hello world";

}



int main() {
    Complex c1,c2,c3;

    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    
    
    return 0;
}

/* ************Characteristics of Constructor***************

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return type.
4. It can have default arguments.
5. We cannot refer to their address.





*/
