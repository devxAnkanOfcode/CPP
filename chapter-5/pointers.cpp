//=======Address=======//

#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    cout << x<< endl;           // prints the value of x
    cout << &x << endl;         // prints the address of x

    int *p = &x;
    cout << p<< endl;           //prints the address of x
    cout << *p<< endl;          //prints the value of x
    cout << &p<< endl;          //prints the address of the pointer p
}