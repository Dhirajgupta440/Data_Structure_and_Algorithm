
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double principal, rate, time;

    cout << "Enter Principal amount: ";
    cin >> principal;

    cout << "Enter Rate of interest (%): ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;


    double A = principal * pow((1 + rate / 100), time);
    double CI = A - principal;

    
    cout << "Compound Interest = " << CI << endl;
    cout << "Total Amount = " << A << endl;

    return 0;
}