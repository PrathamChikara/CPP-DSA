#include <iostream>
using namespace std;
int main (){
int row;
cin>>row;
int col;
cin>>col;
int **arr = new int*[row];

for(int i =0;i< row ; i++){
    arr[i] = new int[col];
}

// Taking the input *  *  *
for( int i = 0 ; i<row ; i++){
    for( int j = 0; j< col ; j++){
        cin>>arr[i][j];
    }
}
// Giving the output *  *  * 
for( int i = 0 ; i<row; i++){
    for( int j = 0; j<col ; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<< endl;
}
// manually freeing the memory * * * 
// first we have to free the arrays otherwise causes memory leak(forget to delete memory)

for( int i = 0; i< row; i++){
    delete []arr[i];
}

// after the arrays delete the ponter array
delete []arr;





return 0 ;
}