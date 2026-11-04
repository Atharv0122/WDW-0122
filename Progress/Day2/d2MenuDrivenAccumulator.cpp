#include <iostream>
using namespace std;

int main() {
    //This code is for Menu Driven Accumulator by arcor
    int a,s=0;
    char ch;
    do
    {
        cout<<"Enter a number = ";
        cin>>a;
        s+=a;
        cout<<"Add another number?(y/n)";
        cin>>ch;
    } while (ch=='y');
    cout<<"The final sum = "<<s;
    return 0;
}