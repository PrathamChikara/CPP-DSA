#include <iostream>
using namespace std;

// Method Overriding / Function overriding * * *
class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};
int main()
{

    Dog ob1;
    ob1.speak();
    return 0;
}