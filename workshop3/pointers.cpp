#include <iostream>
using namespace std;

/// Address of Operator and Pointers

int main() {
   
   int x=10;
   //Address of Operator
   cout<<&x<<endl;
   /* Hexadecimal 
   0-9 same as decimal
   10-A, 11-B.....15-F
   */
   // Pointers: To store Address 
   int * myPtr;
   myPtr=&x;

    //  Deref Operator: * :value 
    cout<<"Add "<<myPtr<<endl;
    cout<<*(myPtr);
   
   return 0;
}
