#include<iostream>
using namespace std;

int main()
{
    float P, R, T;

    cout << "Enter Principal amount: ";
    cin >> P;

    cout << "Enter Rate of interest: ";
    cin >> R;

    cout << "Enter Time (in years): ";
    cin >> T;


    float SI = (P * R * T) / 100;


    cout << "Simple Interest = " << SI << endl;
    cout << "Total Amount + " << P + SI << endl:
    return 0;
}