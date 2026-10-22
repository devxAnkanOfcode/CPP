//Basic calculator using switch case
#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    char op;
    cout<<"Enter 1st number:";
    cin>>n1;
    cout<<"Enter operator:";
    cin>>op;
    cout<<"Enter 2nd number:";
    cin>>n2;

    switch(op){
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        default:
            cout<<"Invalid operator";
    }

}