#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<< "Enter the no of rows : ";
    cin>>n ;
    int i=1;
    while (i<=n){
     int j=1;
     while(j<=n-i+1){
        cout<<j;
        j++;
     }
      int k = 1;
      while(k<=i-1){
        cout<<"*";
        k++;
      }
    int p = 1;
    while(p<=i-1){
        cout<<"*";
        p++;
    }
    int q =1;
    int value = n-i+1;
    while(q<=n-i+1){
      cout<<value;
      value--;
      q++;
    } 
    cout<<endl;
    i++;
    }
}