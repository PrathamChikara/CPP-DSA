#include<iostream>
using namespace std;

int MAX(int num[],int size){
    int max = INT32_MIN;
    for(int i=0;i<size ; i++){
        if(num[i] > max){     // predefined function for this task is
                              // int new_max = INT32_MIN;
            max =num[i];      // new_max  = max(new_max,num[i])
                              // include it in a loop also
        }
    }
    return max;
}


int MIN(int num[],int size){
 int min = INT32_MAX;
 for(int i = 0; i<size;i++){
    if(num[i]<min){
        min = num[i];   // for same like above
                        // int new_min = INT32_MAX;
    }                   // new _min = min(new_min,num[i])
 }
 return min;
}

int main (){
    int arr[100];
    int size;
    cin>> size;

for (int i = 0;i<size;i++){
    cin>>arr[i];
}

   cout<<"The max element is:"<<MAX( arr , size)<<endl;
   cout<<"The min element is:"<<MIN( arr , size)<<endl;

   return 0 ;

}