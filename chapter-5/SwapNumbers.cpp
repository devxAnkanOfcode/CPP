// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout << "Enter x: ";
//     cin >> x;
//     int y;
//     cout << "Enter y: ";
//     cin >> y;
//     int temp;

//     temp = x;
//     x = y;
//     y = temp;

//     cout << "The value of x, after swaping: " << x << endl
//          << "The value of y, after swaping: " << y;
// }

// Swaping without using extra variavle---->

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter x: ";
    cin >> x;
    int y;
    cout << "Enter y: ";
    cin >> y;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "The value of x, after swaping: " << x << endl
         << "The value of y, after swaping: " << y;

         return 0;
}