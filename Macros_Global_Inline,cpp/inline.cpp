#include <iostream>
using namespace std;

inline int get_Max(int a , int b){
return (a > b ? a : b);

}


int main (){
int a = 1;
int b = 2;
int ans;
ans = get_Max(a,b);
cout<<ans<<endl;
 a = a+3 ;
 b = b+1 ;

ans = get_Max(a,b);
cout<< ans ;





return 0 ;
}