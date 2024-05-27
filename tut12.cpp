#include<iostream>
using namespace std;

int main(){
     // what is a pointer?  --------> Data types which holds the address of other data types 

     int a = 3;
     int* b = &a;  // b is a container or variable whcih contains the address of a
     // & ------> Address of operator
     cout<<"The address of a is"<<&a<<endl;
     cout<<"The address of a is "<<b<<endl;
     

     // * -------> (value at) Dereference operator 
     cout<<"The value at address b is " <<*b<<endl;

    // Pointer to Pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;  // b ki value aayegi
    cout<<"The value at  address  value_at(value_at(c))  is "<<**c<<endl;  //a is value aayegi 



}
