#include <iostream>
# include <cmath>
using namespace std;

int main()
{
    int n, x;
    double a, y, z;
    cout << "Plese enter the amount of money that you want to put in your bank account. Annual interest bank in this bank is 1.2%" << endl;
    cin >> a;
    cout << "Please enter the period of time. How many years do you want to deposit your money here?" << endl;
    cin >> n;
    z = a * pow (1.012 , n);
    x = z * 100;
    y = x * 0.01;
    cout <<  "After " << n << " years bank will give you " << y << " yuans" << endl;
    cout << "However, the real amount of money will have the difference of " << z - y << " yuan with that amount, which bank give you" << endl;
    return 0;
}
