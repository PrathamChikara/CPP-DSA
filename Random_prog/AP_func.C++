#include <iostream>
using namespace std;

int AP_func(int num)
{
    int ap = 3 * num + 7;
    return ap;
}

int main()
{
    int n;
    cin >> n;

    cout << " The term is :" << AP_func(n);

    return 0;
}