#include <iostream>
using namespace std;

/// Linear Search

int main() {
    int n;
    cin>>n;
    int a[1000];
    //Input array
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int key;
    cin>>key;

    for(int i=1;i<=n;i++){
        if(a[i]==key){
            cout<<"Element found at index "<<i<<endl;
        }
    }

    return 0;
}
