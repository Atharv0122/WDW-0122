#include <iostream>
using namespace std;

int main() {
    //This code is for finding factoial by arcor
    int n,a=1;
    cout<<"Enter a number = ";
    cin>>n;
    // do
    // {
    //     a*=n;
    //     n--;
    // } while (n!=1);
    // cout<<"The factorial of the input number is = "<<a;

    //Using For-


    for (int b=1;b<=n;b++){
        a*=b;
    }
    cout<<"The factorial is = "<<a;
    
    return 0;
}