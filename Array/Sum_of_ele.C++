#include <iostream>
using namespace std;

int Sum_of_element(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size ; i++){
        sum = sum + arr[i];
    }
    return sum;
}



int main (){
    int arr[100];
    int size ;
    cin>>size;
    for(int i = 0;i<size;i++){
        cin>> arr[i];
    }
    cout<<Sum_of_element(arr,size);
    return 0 ;

}