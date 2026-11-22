#include <iostream>
using namespace std;

int main() {
    //This code is for Lower Traingular by arcor
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"* ";
        }cout<<endl;
    }
    return 0;
}