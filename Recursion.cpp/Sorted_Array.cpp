#include <iostream>
using namespace std;

bool is_Sorted(int arr[], int size){
    // base cases
    if(size == 0 || size == 1){
        return true ;
    }
    
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        is_Sorted(arr+1 , size-1);  
    }
}



int main (){

int arr[6] = {1,2,9,4,5,6};
int size = 6 ;

if(is_Sorted(arr,size)){
    cout<< "Array is Sorted";
}
else{
    cout<< "Array is not Sorted";
}

return 0 ;
}