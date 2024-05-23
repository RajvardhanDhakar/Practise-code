#include <iostream>
using namespace std;
int main(){

  // **********Loops in c++*************
  // there are 3 types of loops in c++:
  /*
  1. For loop
  2. while loop
  3. do while loop
  */
 
  // ***********for loop*******************

// for(int i = 0 ;i<4; i++){
//     cout<<i<<endl;
// }

// Example of Infinite for loop
// for(int i = 0 ; 34<40; i++)
// {
//     cout<<i<<endl;
    
// }


// *****************While loop in c++ ******************
// syntax:
// while(condition)
// { 
//    C++ statements;
// }

// printing 1 to 40 using while loop
// int i =1;
// while(i<=40){
//     cout<<i<<endl;
//     i++;
// }

// Example of Infinite while loop
// int i = 1;
// while(true){
//     cout<<i<<endl;
//     i++;
// }


// *******************do While loop in c++*******************
//  syntax :
// do
// {
//    C++ statements;
// }while(condition);
//  printing 1 to 40 using do while loop
//   int i =1;
//   do{
//      cout<<i<<endl;
//      i++;
//   }while(false);

// write 6 ki multiplication  table using do while
int i = 6;
int n = 1;
do{
   cout<<"6 X "<< n <<" = "<<i*n<<endl;
   n++;
   }while(n<=10);

    
    
}
 

