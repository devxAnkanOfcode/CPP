// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5]; // declaration
//     // arr[0] = 6; // set
//     // arr[1] = 2;
//     // arr[2] = 8;
//     // arr[3] = 5;
//     // arr[4] = 0;
//     // cout << arr[0] << " ";
//     // cout << arr[1] << " ";
//     // cout << arr[2] << " ";
//     // cout << arr[3] << " ";
//     // cout << arr[4] << " ";

//     for (int i = 0; i <= 4; i++)
//     {
//         cout << "Enter the array elements: ";
//         cin >> arr[i];
//     }

//     for (int i = 0; i <= 4; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

//===Passing array to functions===//
// #include <iostream>
// using namespace std;
// void change(int array[])
// {
//     array[0] = 100;
// }
// int main()
// {
//     int arr[3] = {1, 2, 3};
//     for (int i = 0; i <= 2; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     change(arr);
//     for (int j = 0; j <= 2; j++)
//     {
//         cout << arr[j] << " ";
//     }
// }

// Sum of all elements in a given array-->
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3,4,4,5};
//     int sum = 0;
//     for (int i = 0; i <sizeof(arr)/4; i++)
//     {
//         sum = sum + arr[i];
//     }
//     cout << sum;
// }

// Maximun in a array-->
// #include <iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 5, 54, 6, 2, 3};
//     // int maximum = arr[0];
//     int maximum= INT_MIN;
//     for (int i = 0; i < sizeof(arr) / 4; i++)
//     {

//         maximum = max(maximum, arr[i]);
//         // or
//         // if (arr[i] > maximum)
//         // {
//         //     maximum = arr[i];
//         // }
//     }
//     cout << maximum;
// }

// Given an array of inegers, change the value of all odd indexed elements to its second multiple and increment all even indexed vaiue by 10-->
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,4,3,6};
    for(int i=0;i<=4; i++){
        if(arr[i]%2==0){
            arr[i]+=10;
        }
        else{
            arr[i]*=2;
        }
        cout<<arr[i]<<" ";
    }
}