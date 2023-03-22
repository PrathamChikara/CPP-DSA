#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the no of rows: ";
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            if(i%2!=0 && j%2!=0  || i%2==0 && j%2==0){
                cout<<"1";
            }
            if (i%2==0 && j%2!=0 || i%2!=0 && j%2==0){
                cout<<"0";
            }
           
            j++;
        }
        i++;
        cout<<endl;
    }
}
