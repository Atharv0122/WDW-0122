#include <iostream>
using namespace std;

int main() {
    //This code is for checking duck numbers by arcor
    int a,n,org,s=0;
    cin>>n;
    org=n;
    while (n!=0)
    {
        a=n%10;
        s+=a;
        n/=10;
    }
    if (org%s==0){
        cout<<"Harshad Number";
    }
    else {
        cout<<"Not Harshad Number";
    }
    return 0;
}