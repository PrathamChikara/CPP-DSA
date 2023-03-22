#include <iostream>
using namespace std;
int main()
{
    int num = 2;

    while (1)
    {
        switch (num)
        {
        case 2:
            cout << "case 2" << endl;
            exit(0);
        }
    };
    return 0;
}



// // In switch case use of continue statement is not valid .....
// //example
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 0;
//     switch(num){
//      case 0 :
//         cout<< "Case 0";
//         continue;   // it will show an error ....

//      case 1:  
//           cout<<"Case 1";
//           break;

//     }
//     return 0;

// }
