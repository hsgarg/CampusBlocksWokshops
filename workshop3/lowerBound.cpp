#include <iostream>
using namespace std;
// binary Search Applications: Lower Bound/ First Occ

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

    
    int s=1;
    int e=n;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        // 1st Mistake: Always write mid=(s+e)/2 inside the loop
        mid=(s+e)/2;

        //Equal
        if(a[mid]==key){
            ans=mid;
            e=mid-1;
        }
        // greater
        else if(a[mid]>key){
            //right array discard
            e=mid-1;
        }
        // Smaller
        else{
            s=mid+1;
        }

}
    cout<<ans;
    return 0;
}
/*

1,2,2,2,4,5,6,7,9,11
Lower Bound 
s=1, e=5
ans =3
___________________
e=2, s=1 mid =1
1<2
___________________
s=2, e2, mid=2
ans =2
_____________________
e=1, s=2: loop break 


*/