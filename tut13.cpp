#include<iostream>
using namespace std;

int main(){
    // Array Examples
    int marks[] = {23,45,56,89};
    int mathmarks[4];
    mathmarks[0]=78;
    mathmarks[1]=225;
    mathmarks[2] = 2256;
    mathmarks[3] = 3696;
    // These are mathmarks
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    
    //These are marks
    //you can the value of an array
     marks[2] = 4555;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for(int i = 0; i<4 ; i++)
    // {
    //     cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl;
    // }


    // ************same using while loop************
    // int i =0;
    // while(i<4){
    //     cout<<marks[i]<<endl;
    //     i++;
    // }


   // **********Using do while loop**************
//    int i = 0;
//    do{
//     cout<<marks[i]<<endl;
//     i++;
//    }while(i<4);
    


//****************************Pointers and arrays *************************
int* p = marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
// cout<<"the value of  is *p "<<*p<<endl;
// cout<<"the value of marks *(p+1) is "<<*(p+1)<<endl;
// cout<<"the value of marks *(p+2) is "<<*(p+2)<<endl;
// cout<<"the value of marks *(p+3) is "<<*(p+3)<<endl;



}
