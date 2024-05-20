#include<iostream>
using namespace std;

int c = 45; // it is global variable

int main(){
    //*************Build in Data types*******************
    // int a , b , c;
    // cout<<"enter the value of a "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b "<<endl;
    // cin>>b;
    // c = a +b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"the global c is "<<::c;   // :: it is called scope resolution operator


    //**************float ,double and long double LITERALS****************
    // float d = 34.4F; //for make more informative we use f/F
    // long double e = 34.4L;// for make more informative we use l/L
    // cout<<"The size of 34.4 is"<< sizeof(34.4)<<endl;
    // cout<<"The size of 34.4F is"<< sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4fis"<< sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4l is"<< sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is"<< sizeof(34.4L)<<endl;
    // cout<<"the value of d is " <<d<<endl<<"the value of e is "<< e;


   
    //*****************Reference variables***********************
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;


    
    //******************Typecasting********************
    int p = 45;
    float q = 45.98;
    cout<<"the value of a is "<<(float)p<<endl; 
     cout<<"the value of a is "<<float (p)<<endl; 
    cout<<"the value of b is "<<(int)q<<endl;
     cout<<"the value of b is "<<int (q)<<endl;

     cout<<"the value of expression is "<< (p+q )<<endl;
      cout<<"the value of expression is "<< p+ int(q) <<endl;
      cout<<"the value of expression is "<< p+ (int)q <<endl;

  


}
