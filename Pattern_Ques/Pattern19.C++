#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the no of rows : ";
    cin>>n;
    int i=1;
    while(i<=n){
    char value ='A' + n - i;
    int j = 1;
    while(j<=i){
    cout<< value<<" ";
    j++;
    value++;
    }  
     i++;
     cout<<endl;

    }
}