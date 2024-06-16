#include <iostream>
using namespace std;

class Simple
{

    int data1;
    int data2;

public:
    Simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }

    void printData()
    {
        cout << "The value of data1 and data2 is " << data1 << "and" << data2 << endl;
    }
};

int main()
{

    Simple s(2, 3);
    s.printData();

    Simple t(4);  // Here we use default argument 9
    t.printData();
    
    return 0;
}
