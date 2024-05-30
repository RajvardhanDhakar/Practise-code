#include<iostream>
using namespace std;

// Function Prototype
// syntax ----> type function-name (arguments);
// int sum (int a , int b);    --------> Acceptable
 // int sum (int a ,  b); // -------> Not acceptable
int sum (int , int);   // ----------> Acceptable
// void g(void);  -----------> Acceptable
void g();  // -------> Acceptable

int main(){
   int num1 , num2;
   cout<<"Enter the first number"<<endl;
   cin>>num1;
   cout<<"Enter second number"<<endl;
   cin>>num2;
   // num1 and num2 are actual parameters
   cout<<"The sum is "<< sum(num1 , num2)<<endl;
    g();
}

int sum( int a , int b ) {  
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2 .
    int c = a + b;
    return c;
}

void g(){
    cout<<"hello, Good morning!"<<endl;
}
