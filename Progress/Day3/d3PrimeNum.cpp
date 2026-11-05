#include <iostream>
using namespace std;

int main() {
    //This code is for checking if number is prime by arcor
    int n,steps=0;
    cin>>n;
    
    for(int i=n;i>0;i--){
        if (n%i==0){
            steps++;
        }
    }
    if (steps==2){
        cout<<"Prime";
    }
    else if (n==1){
        cout<<"1 is niether prime nor composite";
    }
    else if (n==0){
        cout<<"0 can't be defined as prime or composite";
    }
    else {
        cout<<"Not Prime";
    }
    return 0;
}