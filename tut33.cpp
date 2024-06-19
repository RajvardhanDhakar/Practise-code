#include <iostream>
using namespace std;

class Bankdeposit
{

    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    Bankdeposit(){} // Blank consutructor is need when you don't give value of p, y, r . Other wise it throws error
    Bankdeposit(int p, int y, float r) ;           // r can be a value like 0.04
    Bankdeposit(int p, int y, int r) ;         // r can be a value like 14

    void show();
};

Bankdeposit ::Bankdeposit(int p, int y, float r)
{

    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue *(1 + interestRate);
    }
    
}
Bankdeposit ::Bankdeposit(int p, int y, int r)
{

    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue *(1 + interestRate);
    }
    
}

void Bankdeposit ::show()
{

    cout << "The principle amount was " << principal
    << " .Return value after " << years
    << " years is " << returnValue<<endl;
}

int main()
{
    Bankdeposit bd1 , bd2 , bd3;
    int p, y ;
    float r;
    int R;

    cout<<"Enter the values of p , y and r "<<endl;
    cin>>p>>y>>r;
    bd1 = Bankdeposit(p,y,r);
    bd1.show(); 
 

    cout<<"Enter the values of p , y and R "<<endl;
    cin>>p>>y>>R;
    bd2 = Bankdeposit(p,y,R);
    bd2.show(); 

    
 
    return 0;
}
