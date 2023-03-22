#include <iostream>
using namespace std;

void say_Digit(int n ,string arr[]){
    if(n == 0){
        return ;
    }
 
   say_Digit(n/10,arr);
   int ans = n%10;
   cout<<arr[ans]<< " ";


}

int main (){
int n;
cin>> n ;
 string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
say_Digit(n, arr);

return 0 ;
}