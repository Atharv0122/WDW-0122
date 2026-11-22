#include <iostream>
using namespace std;

int main() {
    //This code is for decreasing number pattern by arcor
    int n,r;
    cout<<"Enter the number:";
    cin>>n;
    r=n;
    for(int i=1;i<=r;i++){
        for(int j=n;j>=1;j--){
            cout<<j<<" ";
        }n--;
        cout<<endl;
    }
    return 0;
}