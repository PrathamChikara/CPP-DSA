#include<iostream>
using namespace std;


bool is_Prime(int num){

    for(int i = 2 ; i<num;i++ ){
        if (num % i == 0){
           return 0;
        }
    }
    return 1;
}

int main  (){
    int  a;
    cin>> a ;
    if(is_Prime(a)){
        cout<< "Prime";
    }
    else {
        cout<<" Not Prime";
    }

    return 0;



}