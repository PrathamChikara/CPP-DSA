#include <iostream>
using namespace std;

int Exponent(int n){
   if( n == 0){
    return 1;
   }
   int small = Exponent(n-1);
   int big = 2 * small;

   return big;

}



int main (){
int n;
cin>> n ;
 
cout<<Exponent(n);
return 0 ;
}