#include<iostream>
using namespace std;

void print_array(int arr[],int size){
    for (int i=0 ; i<size ; i++){
        cout<< arr[i];
    }
}

void sort_01(int arr[] , int size){
    int left = 0;
    int right= size-1 ; 

    while(left < right){
        while(arr[left] == 0){
            left++;
        }
        while(arr[right] == 1){
            right-- ;
        }
        if(left < right){
        swap(arr[left],arr[right]);
        left++;
        right--;

        }
    }

}
int main() {
int arr[7] = {1,0,0,0,0,1,0};
cout<<"Original Array";
print_array(arr , 7) ;
cout<<endl<<"Sorted Array"<< endl;  
sort_01(arr,7);
print_array(arr,7) ;

return 0 ;
}