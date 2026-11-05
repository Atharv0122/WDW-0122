#include <iostream>
using namespace std;

int main() {
    int n,i=1;
    cin>>n;
    i=n;
    while (i>0)
    {
        if (n%i==0){
            cout<<n/i<<",";
        }
        i--;
    }
    
    return 0;
}