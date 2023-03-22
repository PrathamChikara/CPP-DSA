#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Binary number : ";
    cin>> n;
    int answer = 0 ; 
    int i = 0;
    while(n!=0){
        int digit =  n%10;
        if(digit == 1){
        answer = answer + pow(2,i); 
        }
        n=n/10;
        i++;
    }
    cout<< answer ;
    return 0;
    
}