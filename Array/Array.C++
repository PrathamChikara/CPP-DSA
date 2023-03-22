#include <iostream>
using namespace  std; 

void Print_Arr(int arr[],int size){
    for(int i=0 ;i<size;i++){
        cout<<arr[i];
    }
}

int main (){
    int a[500];
    fill_n(a, 500, 1);
    Print_Arr(a,500);

 return 0;
}
