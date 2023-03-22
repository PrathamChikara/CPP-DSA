#include <iostream>
using namespace std;

int maxsum_Row(int arr[][3] , int row , int col){
int MAX = INT32_MIN;
int ans = 0;
for(int i = 0 ; i<row ; i++){
    int sum = 0;
    for(int j = 0;j< col ; j++){
        sum = sum + arr[i][j];   
    }
    if(sum > MAX){
        MAX = sum;
        ans = i;
    }
 
}
   return ans ;
}

int main (){
int arr[3][3];
int sum=  0;


cout<< "Enter the elements in the array :";
for(int i = 0 ; i<3 ; i++){
    for(int j = 0;j< 3 ; j++){
        cin>>arr[i][j];
        
    }
    
    
}

for(int i = 0 ; i<3 ; i++){
    for(int j = 0;j< 3 ; j++){
        cout<<arr[i][j]<< " ";
    }
}


cout<<"Row wise sum  : "<< endl;

for(int i = 0 ; i<3 ; i++){
    for(int j = 0;j< 3 ; j++){
        sum = sum + arr[i][j];
        
    }
    cout<< sum<< endl ;
    sum = 0;

}

cout<<" Max row wise sum is for row :"<< maxsum_Row(arr, 3, 3);


return 0 ;
}