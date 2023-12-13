// #include <iostream>
// #include <cmath>
// using namespace std;
// double function (double x){
//     return // function
// }
// double trapezidal
// int main(){
//     return 0;
// }

#include <iostream>
#include <cmath>

using namespace std;
#define error 0.00005
// Define the function to integrate
double f(double x) {
    return exp(-x * x);
}

// Define the integration using the Composite Trapezoidal Rule
double integrate(double a, double b, int n) {
    double h = (b - a) / n;  // Calculate the interval width
    double sum = 0;  // Initialize the sum variable

    // Loop to calculate the sum for the trapezoids
    for (int i = 1; i < n; ++i) {
        sum += f(a + i * h);  // Add the function value at each point within the interval
    }

    return h / 2 * (f(a) + f(b) + 2 * sum);  // Calculate the final integral value
}

int main() {
    cout << "Using Composite Trapezoidal Rule:" << endl;

    int n = 0;  // Initialize the interval counter
    double a = 0, b = 1, integral = 0;  // Set the integration limits and initialize the integral value

    cout << "Interval \t Integrated Value \t Error" << endl;

    // Iterate until the error is within the acceptable range
    while (fabs(integral - 0.746824132812) > error) {
        n++;  // Increment the interval counter
        integral = integrate(a, b, n);  // Calculate the integral using the defined function
        cout << n << " \t\t " << integral << " \t\t " << fabs(integral - 0.746824132812) << endl;
    }

    cout << "\nIntervals required for evaluation: " << n << endl << endl;
    return 0;
}
