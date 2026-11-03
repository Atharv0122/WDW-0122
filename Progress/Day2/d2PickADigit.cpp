#include <bits/stdc++.h>
using namespace std;

int main() {
    //This code is for picking out any digit by arcor
    int a,n,dig;
    cin>>n;
    while (n!=0)
    {
        a=n%10;
        if (n/100==0 && n/10!=0){
        dig=a;
        }
        n/=10;
    }
    cout<<"The secong digit is = "<<dig;
    
    //Another approach
    // int n,org,a,digit=0;
    // cin>>n;
    // org=n;
    // while (n!=0){
    //     n=n/10;
    //     digit++;
    // }
    // a=(org/int(pow(10,(digit-2))))%10;
    // cout<<"The second digit is = "<<a;
}