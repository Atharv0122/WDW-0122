#include <iostream>
using namespace std;

int main() {
    //This code is for hollow rectangular pattern by arcor
    int c,r;
    cout<<"Enter the rows:";
    cin>>r;
    cout<<"Enter the columns:";
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if (j==1 || j==c || i==1 || i==r){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }cout<<endl;
    }
    return 0;
}