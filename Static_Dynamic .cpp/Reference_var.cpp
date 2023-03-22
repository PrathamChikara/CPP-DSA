#include <iostream>
using namespace std;

// This is a Very Bad Practice * * * 
int& Update3(int n){
    int a = n ;
    int& ans = a ;
    return ans ;
}

void Update2(int& n){
    n++;
}

void Update1(int n){
    n++ ;

}

int main (){
int i = 5 ; 
int &j = i ;

// Here i and j are just two names to the same memory block * * *
// cout<<i<< endl;
// i++;
// cout<<i<< endl;
// j++;
// cout<<i<< endl;


// without reference value
cout<<"Before: "<< i<<endl;
Update1(i) ;
cout<<"After: "<< i<<endl;

// with Reference value
cout<<"Before: "<< i<<endl;
Update2(i) ;
cout<<"After: "<< i<<endl;

Update3(i);

return 0 ;
}