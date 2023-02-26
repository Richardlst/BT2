#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cout << "Farhenheit     Celcius     Absolute value" << endl;
            double c = 1.0 * (t - 32) * 5 / 9;
            double k = c + 273.15;
            cout << setprecision(2) << fixed <<t<< "             " << c << "        " << k << endl;


    return 0;
}
