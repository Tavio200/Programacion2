#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

double f(double x) {
    return x / (1 + x * x); 
}

int main() {
    cout << fixed << setprecision(4); 
    cout << "x\tf(x)" << endl;

    for (double x = -10; x <= 10; x += 0.5) {
        cout << x << "\t" << f(x) << endl;
    }

    return 0;
}

