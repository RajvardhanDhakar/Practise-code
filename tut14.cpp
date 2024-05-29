#include<iostream>
using namespace std;

 // Structure mein data hiding nahi hoti. hum structure ke members ko directly access kar sakte hain kahin se bhi aur kahin bhi,
// Strucutre is not safe .
// Strucuture ke andar function nhi bana sakte.

struct employee 
{
    int eID;
    char favChar;
    float salary;
};

union money
{
    int rice;  //4 bytes 
    char car;  // 1 byte     
    float pounds; // 4 bytes
    // union mein ek time par ek hi use kar sakte hain .
};


int main(){
    enum Meal{breakfast, lunch , dinner};
    Meal m1 = breakfast;
    cout<<m1<<endl;
    Meal m2 = lunch;
    cout<<m2<<endl;
    cout<<(m1==0);
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;


    //struct employee harry;
    // struct employee subham;
    // struct employee Rohandas;
    // harry.eID = 1;
    // harry. favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is" <<harry.eID<<endl;
    // cout<<"The value is " << harry.favChar<<endl;
    // cout<<"The value is"<<harry.salary<<endl; 

}
