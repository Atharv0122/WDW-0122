#include <iostream>
using namespace std;

int main() {
    //This code is for counting number of digits by arcor
    int n,a=0;
    cin>>n;
    while (n!=0)
    {
        n=n/10;
        a++;

    }
    cout<<a;
    return 0;
}