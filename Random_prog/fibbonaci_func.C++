#include <iostream>
using namespace std;

int Fibbobaci(int term){
    int a =0 ;
    int b = 1;
    int c = 0;

    for(int i = 3 ;  i<=term ; i++){
        c = a+b;
        a=b;
        b=c;
       
    }
    return c;
}



int main(){
    int n ;
    cin>> n;

    cout<<"The term is : "<< Fibbobaci(n);
    return 0;

}