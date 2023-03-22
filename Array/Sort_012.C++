#include<iostream>
using namespace std;

void print_array(int arr[],int size){
    for (int i=0 ; i<size ; i++){
        cout<< arr[i];
    }
}

void sort_01(int arr[] , int size){
    int i = 0;
    int j = 0;
    int k= size-1 ; 

    while(j <=k){
        if(arr[j]== 2){
            swap(arr[j],arr[k]);
            k--;
            
        }
        else if(arr[j] == 0){
            swap(arr[j],arr[i]);
            i++;
            j++;

        }
        else if(arr[j]==1){
            j++;
        }

        }
    }
int main() {
int arr[12] = {0,1,2,1,2,1,2,2,1,0,1,2};
cout<<"Original Array";
print_array(arr , 12) ;
cout<<endl<<"Sorted Array"<< endl;  
sort_01(arr,12);
print_array(arr,12) ;

return 0 ;
}