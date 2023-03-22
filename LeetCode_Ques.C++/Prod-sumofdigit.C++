// Problem name : Substract the sproduct and sum of digits of an integer
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>> n;
    int sum = 0;
    int prod = 1;
    while(n!=0){
        int digit = n%10;
        sum = sum + digit;
        prod = prod * digit;

        n=n/10;

    }
    cout<<prod - sum;
    return 0;
}