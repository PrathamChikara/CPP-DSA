#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<< "Enter the no of rows : ";
    cin>>n ;
    int i=1;
    while (i<=n){
     int space  = n-i;
     while(space){
        cout<<" ";
        space--;
     }
      int j = 1;
      while(j<=i){
        cout<<j;
        j++;
      }
      int k=1;
      int value = i-1;
      while(k<=i-1){
        cout<<value;
        k++;
        value--;
      }
    cout<<endl;
    i++;
    }
}