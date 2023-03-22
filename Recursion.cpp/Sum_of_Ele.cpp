#include <iostream>
using namespace std;

int Sum_Array(int arr[] , int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    int sum = arr[0] + Sum_Array(arr + 1 , size -1);

    return sum ;
}


int main (){
int arr[6] = {1,2,3,4,5,6};
int size = 6 ;

cout << Sum_Array(arr ,size);

return 0 ;
}