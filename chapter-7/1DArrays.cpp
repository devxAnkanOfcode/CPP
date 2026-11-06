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
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,5,4,3,6};
//     for(int i=0;i<=4; i++){
//         if(arr[i]%2==0){
//             arr[i]+=10;
//         }
//         else{
//             arr[i]*=2;
//         }
//         cout<<arr[i]<<" ";
//     }
// }

// Count the number of elements in given array greater than a given number x-->
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int arr[]={1,5,3,7,6,9};
//      int x=4;
//      int count=0;
//      for(int i=0;i<=5;i++){
//          if(arr[i]>x){
//              count++;
//          }

//     }
//     cout<<count<<" ";
// }

// Find the second largest element in a given array-->
// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 20, 14, 2, 5, 26, 87};
//     int max = INT_MIN;
//     int secMax = INT_MIN;
//     for (int i = 0; i <= 6; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     for (int j = 0; j <= 6; j++)
//     {
//         if (arr[j] != max && arr[j]>secMax)
//         {
//             secMax = arr[j];
//         }
//     }
//     cout << "The maximum number in the array is: " << max << endl;
//     cout << "The second maximum number in the array is: " << secMax;
// }



//Write a program to copy the contents of onr array ino another array in reverse order-->
// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[]={10,20,30,40,50};
//     int arr2[5];
//     for(int i=0;i<=4;i++){
//         arr2[i]=arr1[4-i];
//         cout<<arr2[i]<<" ";
//     }
// }



//Write a program to reverse the array without using an extra array-->
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int i=0;
    int j=4;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int x=0;x<=4;x++){
        cout<<arr[x]<<" ";
    }
}
