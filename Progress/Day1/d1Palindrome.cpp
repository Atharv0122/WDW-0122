#include <iostream>
using namespace std;

int main() {
    //This code is for checking Palindrome numbers by arcor
    int a,n,r=0,org;
    cin>>n;
    org=n;
    while (n!=0)
    {
        a=n%10;
        r=r*10+a;
        n=n/10;
    }
    if (org==r)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    
    return 0;
}