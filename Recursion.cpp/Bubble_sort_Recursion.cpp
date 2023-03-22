#include <iostream>
using namespace std;

void sort_array( int* arr , int n){

    if(n == 0){
        return;
    }
    if(n == 1){
        return ;
    }
    for( int i = 0 ; i<n-1 ; i++){
        if( arr[i] > arr[i+1] ){
            swap(arr[i] ,arr[i+1]);
        }
    }

    sort_array(arr , n-1);




}




int main (){
int arr[5] = {2,4,7,1,9};

sort_array(arr , 5);
for(int i = 0 ;i<5 ; i++){
    cout<< arr[i];
}
return 0 ;
}