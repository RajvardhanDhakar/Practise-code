#include <iostream>
using namespace std;

// Hum log ek aisa variable bana sakte hain jo ki jitne bhi objects is class ke ban jaayein unke liye same rahe
// Static variable ko class ke bahar likhte hain.
class Employee
{
    int id;
    static int count; /* ye object ki property  nahi hai ye class ki  property hai aur is calss ke jitne
                       object bante chle jaayenge unka jo count hai jo purana onject jo bana tha humara usse bo value aayegi .
                       yaani ki agar ek object banaya aur uske count ki value 10 kardi hogi to agla object jab bana rahe honge to count ki value aapko 10 milegi  */

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of the employee is " << id << "and this is employee number " << count << endl;
    }
    static void getCount(void)
    { /* static functions ko koi dusre static function ya static variable ka hi access hote hain uske      
       alawa nahi hota hai*/

       // cout<<id;  -----> It throws an error
     cout << "The value of count is " << count << endl;
    }
};

// count is the static data member of the class Employee
int Employee ::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish; // yahan ye tino ek hi count variable ko share kar rahe hain

    harry.setData();
    harry.getData();
    Employee ::getCount();

    rohan.setData();
    rohan.getData();
    Employee ::getCount();

    lovish.setData();
    lovish.getData();
    Employee ::getCount();

    return 0;
}
