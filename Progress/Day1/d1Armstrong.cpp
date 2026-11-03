#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //This code is for checking armstrong numbers by arcor
    int n,a,s=0,org;
    cin>>n;
    org=n;
    while (n!=0)
    {
        a=n%10;
        s=s+ (a*a*a); //Dont use pow as it takes value for 5 cube as 124.99999.....
        n=n/10;
    }
    if (org==s){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong Number";
    }
    return 0;
}