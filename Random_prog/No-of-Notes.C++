#include <iostream>
using namespace std ;
int main(){
    int  amount ;
    int ans ;
    cout<< "Enter the amount :";
    cin>>amount;


    switch(100){
        case 100 : {
            ans = amount/100 ; 
            cout<< " No of 100 ruppee notes : "<< ans<< endl;
            amount = amount % 100;
        }
        case 50 : {
            ans = amount/50 ; 
            cout<< " No of 50 ruppee notes : "<< ans<< endl;
            amount = amount % 50; 
        }
        case 20 : {
            ans = amount/20 ; 
            cout<< " No of 20 ruppee notes : "<< ans<< endl;
            amount = amount % 20; 
        }
        case 1 : {
            ans = amount/1 ; 
            cout<< " No of 1 ruppee notes : "<< ans<< endl;
            amount = amount % 1; 
        }


    } 
    return 0 ;
}