#include <iostream>
using namespace std;
void Even_Odd(int num)
{
    if (num % 2 == 0)
    {
         cout<<"Number is even";
    }
    else {
        cout<<"Number is odd";
    }
}
int main()
{
    int a;
    cin >> a;
    Even_Odd(a);


    return 0; 
}

// Method 2  . . . 

// bool Even_odd (int num){
//     if(num & 1){
//         return 0;
//     }
//     else
//     return 1;
// }


// int main(){
//     int a;
//     cin >> a;
//     if (Even_odd(a)){
//         cout << "even";
//     }
//     else{
//         cout << "odd";

//     }
//     return 0; 
// }

