#include <iostream>
using namespace std;

class factorial
void findFactorial(int, int *);//Function prototype
int main()
{
    int i,fact,num;//variable declaration
    cout<<"Enter a number: \n";
    cin>>num;//Takes input from the user
    findFactorial(num, &fact);//function call
    cout<<"Factorial of " <<num<< " is: "<<fact;
    //display the factorial of given number
    getch();
    return 0;
}
//function definition with parameter
void findFactorial(int num, int *fact){
int i;
*fact=1;
for(i=1; i<=num; i++){//calculate factorial using for loop
*fact=*fact*i;
}
}


class Multiplier {
public:
    void multiply(int* num1, int* num2, int* result);
};

void Multiplier::multiply(int* num1, int* num2, int* result) {
    *result = (*num1) * (*num2);
}

int main() {
    int num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    Multiplier multiplier;
    multiplier.multiply(&num1, &num2, &result);

    cout << "Result of multiplication: " << result << endl;

    return 0;
}
