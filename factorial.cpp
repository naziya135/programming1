//Calculate factorial of a Number 


#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial;    
    return 0;
}

Output:

Enter a positive integer: 12
Factorial of 12 = 479001600
