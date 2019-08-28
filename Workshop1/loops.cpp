#include <iostream>
using namespace std;
int main() {
   
   int n;
   //n input lelo
   cin>>n;
   // counting i se start hogi
   int i=1;
   // while loop will terminate when i>n
   int marks;
   // Start is outside the loop, hence will print only once 
   cout<<"Start";
   cout<<endl;
   while(i<=n){
       //cout<<"Start";
        // cout<<endl;
       cin>>marks;
       marks=marks+1;
       cout<<marks;
       cout<<endl;

       
       // counting me +1 krte hai
       i=i+1;
   }

    cout<<"FINISH!";


   return 0;
}
