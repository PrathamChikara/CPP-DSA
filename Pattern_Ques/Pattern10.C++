// Method 1 : Using  a new variable * * *

#include<iostream>                                   
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;
    int i=1;
    while(i<=n){
    int j=1;
    int value = i;
     while (j<=i){
         cout<<value<<" ";
         j++;
         value--;
    }
    cout<<endl;
    
    i++;

    }
}


// Method 2 : without using a new variable * * *
#include<iostream>                
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows : ";
    cin>>n;
    int i=1;
    while(i<=n){
    int j=1;
    
     while (j<=i){
         cout<<(i-j+1)<<" ";
         j++;
    }
    cout<<endl;
    
    i++;

    }
}