#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows :";
    cin>>n;
    int i = 1;
    while(i<=n){
      int j = 1;
      while (j<=n){
        char ch = ('A' + i + j - 2) ;
        cout<<ch<< " ";
        j++ ;
      } 
      cout<<endl;
      i++;
    } 
}


#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the no of rows :";
    cin>>n;
    int i = 1;
    while(i<=n){
      int j = 1;
      char value = 'A' + i -1;  
      while (j<=n){
        cout<<value<< " ";
        j++ ;
        value++;
      } 
      cout<<endl;
      i++;
    } 
}