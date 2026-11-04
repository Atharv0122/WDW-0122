#include <iostream>
using namespace std;

int main() {
    //This code is for coaltz sequence by arcor
    int n,steps=0;
    cin>>n;
    while (n!=1)
    {
        if (n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
        steps++;
    }
    cout<<steps;
    return 0;
}