//=====Nested loops=====//
//===Pattern printing using nested loops===//
// eg-->

// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout << "Enter rows:";
//     cin >> m;
//     int n;
//     cout << "Enter cols:";
//     cin >> n;

//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "* " ;
//         }
//         cout << endl;
//     }
// }

// Triangle pattern printing-->

// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout << "Enter the number of rows:";
//     cin >> m;
//     int n;
//     cout << "Enter the number of collums:";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             // cout << (char)(j + 64);
//             cout << "* " ;
//         }
//         cout << endl;
//     }
// }

// Triangle pattern printing with characters and numbers-->

// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout << "Enter the number of rows:";
//     cin >> m;
//     int n;
//     cout << "Enter the number of colums:";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if(i%2==0){
//                 cout << (char)(j+64);
//             }
//             else{
//                 cout<<j;
//             }
//         }
//         cout << endl;
//     }
// }

// Reverse triangle pattern printing--->

// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout << "Enter no of rows:";
//     cin >> m;
//     int n;
//     cout << "Enter no of cols:";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m + 1 - i; j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }
// }

// Triangle pattern printing with 0 and 1 -->

// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout << "Enter the number of rows:";
//     cin >> m;
//     int n;
//     cout << "Enter the number of collums:";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if((i+j)%2 == 0){
//                 cout<<"1 ";
//             }
//             else{
//                 cout<<"0 ";
//             }
//         }
//         cout << endl;
//     }
// }

// Special pattern printing-->

#include <iostream>
using namespace std;
int main()
{
    // int m;
    // cout << "Enter the number of rows:";
    // cin >> m;
    int n;
    cout << "Enter the number of sides:";
    cin >> n;
    int mid = (n / 2 + 1);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == mid || j == mid)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}