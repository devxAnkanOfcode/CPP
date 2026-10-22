// for Loop--->>>
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter the value of n:";
//      cin>>n;
//      for(int i=2;i<=n;i=i+2){
//          // if(i%2!=0){
//          //     cout<<i<<" ";
//          // }
//           cout<<i<<" ";
//      }
//  }

// BREAK Statement--->>>
//  QUE) Table of 19
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter n:";
//      cin>>n;
//      for(int i=1;i<=10;i++){
//          cout<<n*i<<endl;
//          break;
//      }
//  }

// QUE) Checking a number is composite or not
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     bool flag;

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "It is a composite number.";
//             break;
//         }

//         else
//         {
//            cout << "It is a prime number.";
//         }
//         break;
//     }

// }

// QUE) Checking a number is prime or not
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter n:";
//      cin>>n;

//     for(int i=1;i<=n;i++){
//         if(n%1==0 && n%n==0){
//             cout<<"It is a Prime number."<<endl;
//         }
//         else{
//             cout<<"It is not a Prime number.";
//         }
//         break;
//     }

// }

// QUE) Print numbers 1 to 20 except 3 & 8
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=20;i++){
//         if(i==3 || i==8){
//             continue;
//         }
//         else{
//             cout<<i<<" ";
//         }
//     }

// }

// QUE) WAP to print odd numbers from 1 to 100 using continue
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=100;i++){
//         if(i%2==0){
//             continue;
//         }
//         else{
//             cout<<i<<" ";
//         }
//     }
// }

// While loop--->>>

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=100)
// }

// Do-While Loop--->>>

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     do{
//         cout<<i<<" ";
//         i++;
//     }while (i<=10);

// }

// Counting number of digit in a number-->

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     int count=0;
//     while (n>0)
//     {
//         n=n/10;
//         count++;
//     }
//     cout<<"The number of digits in this number is:"<<count;

// }

// Sum of given digits-->

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     int sum = 0;
//     while (n != 0)
//     {
//         int ld = n % 10;
//         n = n / 10;
//         sum = sum + ld;
//     }
//     cout << sum;
// }

// Product of given digits-->

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     int product = 1;
//     while (n != 0)
//     {
//         int ld = n % 10;
//         n = n / 10;
//         product = product * ld;
//     }
//     cout << product;
// }

// WAP to print sum of all the even digits of a given number-->

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     int sum=0;
//     int ld;
//     while (n!=0)
//     {
//         ld= n%10;
//         n=n/10;
//         if (ld%2==0)
//         {
//             sum=sum+ld;
//         }

//     }
//     cout<<sum;
// }

// WAP to print reverse of a given number-->

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     int ld;
//     int rev=0;
//     while (n != 0)
//     {
//         ld = n % 10;
//         rev=ld;
//         n = n / 10;
//     }
//     cout<<rev;
// }

//Print the factorial of a given number-->

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    cout<<fact;
} 