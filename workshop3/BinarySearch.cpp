#include <iostream>
using namespace std;

//Binary Serach

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

    while(s<=e){
        // 1st Mistake: Always write mid=(s+e)/2 inside the loop
        mid=(s+e)/2;

        //Equal
        if(a[mid]==key){
            cout<<mid;
            break;
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




 return 0;
}

/*
Array: 1,2,3,7,11,17,21
key=3 //element to be searched
1st: s=1, e=7, mid=(s+e)/2 = 4

1)a[mid]==key : print mid

2) a[mid] >key  : Right or Bigger array discard
e=mid-1 = 3
s=1
mid=(s+e)/2=2

3) a[mid]<key  Left array discard : Smaller array discard
s=mid+1

*/

// Binary Search works only on Sorted Arrays
// Binary Search is better than Linear Search

/*

DRY RUN
1,2,3,7,11,17,21
key:23

1st ITER:
s=1, e=7, mid=4
a[mid]=7:
7<23 -> left or smaller array discard
____________________________________________
s=5, e=7 ,mid=6     11,17,21
17<23 ->> left or smaller array discard
____________________________________________
s=7 e=7 mid =7        21
21<23 ->>> left or smaller array discard
____________________________________________
s=8 e=7 s>e : algo should stop

CASE-2:
5
3 5 7 9 28
9

s=1, e=5, mid=3
a[mid]=7 <9
Left or smaller array discarded
s=mid+1;
______________________________________
s=4,e=5 mid=4
a[mid]=9
a[mid]==key :Yes
loop break

Time Comlexity
_ _ _ _ _ _ : n

_ _ _ :n/2

_:n/4........after k iterations : n/(2 raised to ther power k-1)

In last iteration number of elements =1
n/2^(k-1) =1
2^(k-1)=n
k-1=log(n)
k=log(n)+1

*/

