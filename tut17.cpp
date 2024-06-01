# include <iostream>
using namespace std;

inline int product(int a , int b){
    return a*b;
}

float moneyReceived(int currentMoney , float factor = 1.04){
    return currentMoney * factor;
}

int main(){
    // int a ,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money  = 100000;
    cout<<"if you have " << money<<"in your bank account , you will receive "<<moneyReceived(money)<<"After 1 year"<<endl;
    cout<<"if you have " << money<<"in your bank account , you will receive "<<moneyReceived(money,1.10)<<"After 1 year"<<endl;
    
}
