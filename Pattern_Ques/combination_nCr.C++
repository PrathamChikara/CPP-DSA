#include <iostream>
using namespace std;

int fact (int num){
    int fact = 1;
    for( int i = 1 ; i<=num;i++){
        fact = fact * i ; 
    }
    return fact ; 
}


int nCr ( int n ,int r){
     int comb;
     comb = fact(n)/(fact(r)*fact((n-r)));
     return comb;
}



int main (){
     int a , b;
     cin>> a>> b;
     cout<<"The nCr is :"<< nCr(a,b);
   return  0;
}