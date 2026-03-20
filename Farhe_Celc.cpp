#include <iostream>
using namespace std;

float Conversion(float n)
{
    return (n - 32.0) * 5.0 / 9.0;
}

int main()
{
    float n;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> n;

    cout << "Temperature in Celsius: " << Conversion(n);

    return 0;
}