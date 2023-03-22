#include <iostream>
using namespace std;
 long long int sqrt_Binary(int x){
     int start = 0 ;
     int end = x;
     int ans = -1;
    long long int mid = start + (end - start)/2 ;
     while(start <= end){
         if(mid * mid == x){
             return mid ;
         }
         else if(mid * mid > x){
             end = mid-1;
         }
         else{
             start = mid + 1;
             ans = mid ; 
         }
         mid = start + (end - start)/2;
     }
   return ans ; 
}
double Precision_func(int root , int precision , int x ){
    double factor = 1;
    double ans = root;
    for(int i = 0; i< precision  ; i++){
       factor = factor/10;
       for(double j =ans ; j * j<= x ; j = j+factor ){
           ans = j ;
       }
    }
    return ans ; 
}



int main(){
    int x;
    cout<<"Enter the no:"<< endl;
    cin >>x;
    int root = sqrt_Binary(x);

    cout<< Precision_func(root ,3, x);

   return 0 ;
}