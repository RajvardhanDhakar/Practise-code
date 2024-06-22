#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value

int count = 0; // Global variable
class num
{

public:
    num()
    {
        count++;
        cout << "This is the time when my constructor is called for object number " << count << endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{

    cout << "We are inside our main function " << endl;
    cout << "Creating first objecet n1 " << endl;
    num n1;
    {
        cout << "Entering in this block " << endl;
        cout << "Creating two more objects " << endl;

        num n1, n2;
        cout << "Exiting the loop" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
