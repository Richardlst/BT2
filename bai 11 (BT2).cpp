#include <bits/stdc++.h>
using namespace std;

int main() {
    int minx, maxx, step, n, t;
    cin >> minx>>maxx>>step;
    n=(maxx-minx)/step+1;
    t=minx;
    cout << "Farhenheit     Celcius     Absolute value" << endl;
    for(int i=0; i<n; i++){
            double c = 1.0 * (t - 32) * 5 / 9;
            double k = c + 273.15;
            cout << setprecision(2) << fixed <<t<< "             " << c << "        " << k << endl;
            t+=step;
    }
    return 0;
}
