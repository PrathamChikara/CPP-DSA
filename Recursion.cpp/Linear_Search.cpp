#include <iostream>
using namespace std;

bool Linear_Search(int arr[],int size ,int key){
    // Base Case
    if(size == 0){
        return false ;
    }
     if(arr[0] == key){
        return true;
     }else{
    bool result =  Linear_Search(arr + 1 ,size-1 ,key);
    return result ;
     }

} 


int main (){
int arr[6] = {3,6,1,9,66,45};
int size = 6 ;
int key = 45;


if(Linear_Search(arr,size,key)){
    cout<<"Key is Found";

}
else{
    cout<<"Key is Not Found";
}




return 0 ;
}