#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int n;                             // code is completely correct just not working here use online compiler
    cout<< "Enter the number :";       // use float in answer variable as it is compiler dependent 
    cin>> n;
    int answer = 0;
    int i = 0;
    while(n != 0){
        int digit = n % 2  ;
        answer = answer + ( digit* pow(10, i) ); 
        n = n/2 ; 
        i++;
    }
   cout<< answer ; 
}