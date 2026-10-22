// #include <iostream>
// using namespace std;
// void raj(){
//     cout<<"Hello," <<endl;
//     cout<<"Ankan Chakraborty this side"<<endl;
// }
// void ankan(){
//     cout<<"Hey, I am Raj."<<endl;
//     raj();    //We can call functions multiple times from multiple functions.
// }
// int main()
// {
//     raj();
//     cout<<"Hiii"<<endl;
//     ankan();

// }

// Return type using sum function-->

// #include <iostream>
// using namespace std;

// void sum(int a, int b)
// {
//     cout << a + b;
// }

// int main()
// {
//     int a;
//     cin >> a;
//     int b;
//     cin >> b;

//     sum(a,b);
// }

//========= Library Functions =========//

// #include <iostream>
// #include<cmath>
// using namespace std;

// int main()
// {
    // cout<<cbrt(100);
    // cout<<max(10,25);
    // cout<<pow(5,2);

// }


//=====Pascal Triangle=====//

#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1; i<=x; i++){
        f*=i;
    }
    return f;
}
int ncr(int n, int r){
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    return a/(b*c);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}