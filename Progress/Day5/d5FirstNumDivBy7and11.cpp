#include <iostream>
using namespace std;

int main() {
    //This code is for checking the use of 'break' and 'continue' by arcor
    for (int i=1; i<200;i++){
        if (i%7==0 && i%11==0) {
            cout<<i<<endl;
            break;
        }
    }
    for (int i=1; i<200;i++){
        if (i%79==0) {
            cout<<i<<endl;
            continue;
        }
    }
    return 0;
}