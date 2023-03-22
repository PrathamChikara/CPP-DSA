#include <iostream>
using namespace std;
int main (){
    int n ;
    cout<<"Enter the no of rows : ";
    cin>>n;
    int i=1; 
    while(i<=n){
        char value = 'A' + i -1;
        int j=1;
        while(j<=i){
            cout<<value<<" ";
            j++;
            value++ ;
        }
        i++;
        cout<<endl;
    }
}


#include <iostream>
using namespace std;
int main (){
    int n ;
    cout<<"Enter the no of rows : ";
    cin>>n;
    int i=1; 
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch = 'A'+ i + j -2;
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}










