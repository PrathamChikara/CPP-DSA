#include<iostream>
using namespace std ;
int main(){
    int a,b;
    char op;
    cout<< " Enter the first no:"<< endl ;
    cin >> a;
    cout<< " Enter the Second no:"<< endl ;
    cin >> b;
    cout<< " Enter the operator"<< endl ;
    cin >> op;

    switch(op){
        case '+' :
        cout<< "the sum is :"<< a+b<<endl;
        break;
        case '-' :
        cout<< "the subs is :"<< a-b<<endl;
        break;
        case '*' :
        cout<< "the  prod is :"<< a*b<<endl;
        break;
        case '/' :
        cout<< "the  div is :"<< a/b<<endl;
        break;
        case '%' :
        cout<< "the  mod is :"<< a%b<<endl;
        break;
        default :
        cout<< " Invalid Operator";
    
    }

    return 0;

}
    
    