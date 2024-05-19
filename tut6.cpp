# include<iostream>
using namespace std;

int glo = 6; // global variable
void sum(){

    int a;
    cout<<glo;
    
}



int main() {

    int glo = 9; // local variable(precendence over global variable)
    glo = 78;

    


int a = 14 , b = 15 ;  
float pi = 3.43;
char ch ='d';
bool is_true = true; //print 1 in true while in case of false it prints 0 

sum();
cout<<glo<< is_true;


return 0 ;



}



/* How to access a global variable when there is a local variable with same name ?

#include <iostream>
using namespace std;

int glo = 8;

int main(){
    
    int glo  = 5;

    cout<< "The global variable is "<< ::glo<<endl;
    cout<<"The local variable is " << glo << endl;

    return 0;
}


*/
