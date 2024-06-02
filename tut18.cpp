#include<iostream>
using namespace std;
//*************Recursion***************
// fibonacci series (1,1,2,3,5,8,13,21,34.........)
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+ fib(n-1);
}


int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
// Steps by steps calculation of factoraial(4)
// factorail(4) = 4* factorial(3)
// factorial(4) = 4* 3* factorial(2)
// factorail(4) = 4* 3 * 2 * factorial (1)
// factorail(4) = 4 * 3 * 2 * 1
// factorial(4) = 24

int main(){
    // Factorial of a number
    // 6! = 6*5*4*3*2*1
    //n* = n* (n-1)!

    int a ;
    cout<<" Enter the value of a is " <<endl;
    cin>>a;
//  cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The factorial of "<<a<<" is "<<fib(a)<<endl;
 
 }
