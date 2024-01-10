#include <iostream>
#include<math.h>
using namespace std;



class Factorial 
{
private:
    int num;
    unsigned long long *factorialPtr; // Pointer for factorial

public:
    Factorial() : factorialPtr(nullptr) {} // Constructor to initialize the pointer

    ~Factorial() // Destructor to free allocated memory
    {
        delete factorialPtr;
    }

    void calculateFactorial();
    void show();
};

void Factorial::calculateFactorial()
{
    cout << "Enter a number:" << endl;
    cin >> num;

    factorialPtr = new unsigned long long; // Allocating memory for factorial

    if (num == 0 || num == 1)
    {
        *factorialPtr = 1;
    }
    else
    {
        *factorialPtr = 1;
        for (int i = 2; i <= num; ++i)
        {
            *factorialPtr *= i;
        }
    }
}

void Factorial::show()
{
    cout << "Factorial: " << *factorialPtr << endl;
}

return (0)
}





