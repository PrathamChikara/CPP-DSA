#include <iostream>
using namespace std;



int Gcd(int a , int b){
    if(a == 0){
        return b ;
    }
    else if(b == 0){
        return a ;
    }
    while(a!=b){
        if(a > b){
            a  = a-b;
        }
        else{
            b= b-a;
        }
    }
    return a;
}


int main (){

int  a,b ;
cout<<"Enter the two numbers : ";
cin>>a >> b;

cout<<"The Gcd id: "<< Gcd(a,b);

return 0 ;
}