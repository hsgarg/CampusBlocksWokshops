#include <iostream>
using namespace std;

// Modulo : %
/*
a%b : a/b: remainder 
5%3: 2


*/
int main() {
    cout<<5%3<<endl;
    cout<<10%2<<endl;
    cout<<13%3<<endl;

    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }


    return 0;
}
