#include <iostream>
using namespace std;

int main() {
    //This code is for checking duck numbers by arcor
    int a,n;
    cin>>n;
    bool zero=false;
    while (n>0)
    {
        if (n%10==0){
            zero=true;
        }       
        n/=10;
    }
    if (zero){
        cout<<"Duck";
    }
    else {
        cout<<"Not Duck";
    }
    return 0;
}