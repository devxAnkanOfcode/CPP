//Conditionals
//IF-ELSE -->

//QUE-1) Checking if a number is even or odd-->
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter number to check:";
//     cin>>x;
//     if(x%2==0){
//         cout<<"Even number";
//     }
//     // if(x%2!=0){
//     //     cout<<"Odd number";
//     // }
//     else{
//         cout<<"Odd number";
//     }
// }

// QUE-2) Take integer input and print the absolute value of the integer-->
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number:";
//     cin>>num;
//     if(num>=0){
//         cout<<num;
//     }
//     else{
//         cout<<-num;
//     }
// }

//QUE-3) Profit loss check
// #include<iostream>
// using namespace std;
// int main(){
//     int cp;
//     cout<<"Enter cost price:";
//     cin>>cp;
//     int sp;
//     cout<<"Enter selling price:";
//     cin>>sp;

//     if(cp<sp){
//         cout<<"Profit"<<endl;
//         cout<<"Profit is:"<<(sp-cp);
//     }
//     else if(cp>sp){
//         cout<<"Loss"<<endl;
//         cout<<"Loss is:"<<(cp-sp);
//     }
//     else if(cp==sp){
//         cout<<"No profit no loss";
//     }
    // else{
    //     cout<<"No profit no loss";
    // }
// }

// QUE-4) Checking a number is three digit or not
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter a number:";
//     cin>>num;

//     if(num>99 && num<1000){    //We can use 'and' also instead of '&&'
//         cout<<"This is a three digit number";
//     }
//     else{
//         cout<<"This is not a three digit number";
//     }
// }

// QUE-5) Checking a number is divisible by 5 or 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;

//     if(n%5==0 || n%3==0){   //We can use 'or' also instead of '||'
//         cout<<"Divisible by 5 or 3";
//     }
//     else{
//         cout<<"Does not divisible by 5 or 3";
//     }
// }

//QUE-6) Finding greatest number among three numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int num1, num2, num3;
//     cout<<"Enter 1st number:";
//     cin>>num1;
//     cout<<"Enter 2nd number:";
//     cin>>num2;
//     cout<<"Enter 3rd number:";
//     cin>>num3;

//     if(num1>num2 && num1>num3){
//         cout<<"1st number is the greatest";
//     }
//     else if(num2>num1 && num2>num3){
//         cout<<"2nd number is the greatest";
//     }
//     else{
//         cout<<"3rd number is the greatest";
//     }
//  }

// -->>Greatest number using nested if-else🏅🏅🏅
// #include<iostream>
// using namespace std;
// int main(){
//     int a, b, c;
//     cout<<"Enter 1st number:";
//     cin>>a;
//     cout<<"Enter 2nd number:";
//     cin>>b;
//     cout<<"Enter 3rd number:";
//     cin>>c;

//     if(a>b){    //b cann't be the greatest
//         if(a>c){    //a>b & a>c--> a>b>c
//             cout<<a<<" is the greatest.";
//         }
//         else{   //c>a
//             cout<<c<<" is the greatest.";
//         }
//     }
//     else{
        // if(b>c){    //b>a & b>c--> b>a>c
//             cout<<b<<" is the greatest.";
//         }
//         else{   //c>b & b>a-->c>b>a
//             cout<<c<<" is the greatest.";
//         }
//     }
// }

// QUE) Determine the youngest among three person🏅
// #include<iostream>
// using namespace std;
// int main(){
//     int ram, shyam, ajay;
//     cout<<"Enter Ram's age:";
//     cin>>ram;
//     cout<<"Enter Shyam's age:";
//     cin>>shyam;
//     cout<<"Enter Ajay's age:";
//     cin>>ajay;

//     if(ram<shyam){  //Shyam cant be the youngest
//         if(ram<ajay){
//             cout<<"Ram is the youngest person.";
//         }
//         else{
//             cout<<"Ajay is the youngest person.";
//         }
//     }
//     else{
//         if(shyam<ajay){
//             cout<<"Shyam is the youngest person.";
//         }
//         else{   //Shyam<Ram--Ayay<Shyam:-->Ajay<Shyam<Ram
//             cout<<"Ajay is the youngest person.";
//         }
//     }
// }

// QUE) Grad printing of the students according to their marks
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;

    if(marks>=81 && marks<=100){
        cout<<"Very Good";
    }
    else if(marks>=61){
        cout<<"Good";
    }
    else if(marks>=41 ){
        cout<<"Average";
    }
    else{
        if(marks<=40){
            cout<<"Fail";
        }
        else{
            cout<<"Invalid marks";
        }
    }
}