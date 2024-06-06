//****************** OOPS -  Classes and Objects*************************8

    //  C++  ---> initially called ---> C with classes by stroustroup
    // class --->  extension of structures (in c)
    // Sturctures had limitaions 
    //      ----> members are public
    //      ----> No methods 
    // classes ---> structures +  more 
    // classes ----> can have methods and properties 
    // classes ----> can make few members as private & few as public
    // Strucutres in c++ are typedefed
    // harry.salary = 8 makes no sense if salary is private
    // Structures in c++ are typedefed
    // you can declare objects along with the class declaration like this :
    /* class Employee {
        class defination 
      } harry , rohan , lavish 
     */

#include <iostream>
#include <string>
using namespace std;

// **************************Nesting of member functions***************

class binary
{
    private:
           string s ;    // class mein by default private hota hai
           void check_bin(void);
   public:
       void read(void);
       void ones_complement(void);
       void display(void);

};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
 
void binary :: check_bin(void){
    for(int i = 0 ; i< s.length();i++){
        if(s.at(i)!= '0' && s.at(i)!= '1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);  // we can also use exit(0) to come out or to exit from the loop and we can also use break
        }
    }
}
void binary :: ones_complement(void){
    
    check_bin();  // This is called Nesting of member function              
    for(int i = 0; i<s.length();i++){
    if(s.at(i)== '0'){
        s.at(i) = '1';
    }
    else {
        s.at(i)='0';
    }
    }
}


void binary :: display(void){
    cout << "Displaying your binary number" << endl;
    for(int i = 0; i< s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}



int main() {
    
    
    binary b;

    b.read();
  //  b.check_bin();
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}
