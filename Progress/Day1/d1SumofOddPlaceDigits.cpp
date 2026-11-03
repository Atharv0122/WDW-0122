#include <iostream>
using namespace std;

int main() {
    //This code is for sum of odd place digits of a numbers by arcor
    int a,n,s=0,digits=0,org;
    cin>>n;
    org=n;
    while(n!=0){
        n=n/10;
        digits++;
    }
    while (org!=0 && digits!=0)
    {
        a=org%10;
        if (digits%2!=0){
        s=s+a;
        }
        digits--;
        org=org/10;
    }
    cout<<s;
    return 0;
}