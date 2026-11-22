#include <iostream>
using namespace std;

int main() {
    //This code is for increasing number pattern by arcor
    int n,r;
    cout<<"Enter the number:";
    cin>>n;
    r=n;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }n--;
        cout<<endl;
    }
    return 0;
}