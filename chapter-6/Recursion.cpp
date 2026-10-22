//===Function calling itself===//

// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"Hello Ankan";
// greet();                //calls itself
// }
// int main(){
//     greet();
// }

// Printing 1 to n-->
//  #include<iostream>
//  using namespace std;
//  void print(int n){
//      if(n==0){
//          return;         //Base case
//      }
//      cout<<n<<endl;
//      print(n-1);         //call
//  }
//  int main(){
//      print(5);
//  }

// Printing 1 to n(using etra parameter)-->
//  #include<iostream>
//  using namespace std;
//  void oneton(int x, int n){
//      if(x>n){
//          return;
//      }
//      cout<<x<<endl;
//      oneton(x+1, n);             //call
//  }

// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     oneton(1,n);
// }

// Printing 1 to n(without using extra parameter)-->
//  #include<iostream>
//  using namespace std;
//  void print(int n){
//      if(n==0){           //base case
//          return;
//      }
//      print(n-1);         //call
//      cout<<n<<endl;      //work
//  }

// int main(){
//     int x;
//     cout<<"Enter x: ";
//     cin>>x;
//     print(x);
// }

// Printing sum of 1 to n(return type)-->
// #include <iostream>
// using namespace std;
// int sum(int n)
// {
//     if (n == 1)
//         return 1; // base case
//     return n + sum(n - 1);
// }
// int main()
// {
//     int x;
//     cout << "Enter x: ";
//     cin >> x;
//     cout << sum(x);
// }

// Print factorial of n using recursion-->
//  #include<iostream>
//  using namespace std;
//  int fact(int n){
//      if(n==0 || n==1) return 1;
//      return n * fact(n-1);
//  }
//  int main(){
//      int x;
//      cout<<"Enter x: ";
//      cin>>x;
//      cout<<fact(x);
//  }

// Printing a raised to the powwer b using recursion-->
// #include <iostream>
// using namespace std;
// int pow(int a, int b)
// {
//     if (b == 0)
//         return 1;
//     return a * pow(a, b - 1);
// }
// int main()
// {
//     int x;
//     int y;
//     cout << "Enter base,x: ";
//     cin >> x;
//     cout << "Enter power,y: ";
//     cin >> y;
//     cout << pow(x, y);
// }

//======MULTIPLE CALLS CONCEPT======//
// Write a function oto calculate the n th fibonacci number using recursion-->
#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int x; 
    cout << "Enter x: ";
    cin >> x;
    cout << fibo(x);
}