#include <iostream>
#include <cmath>
#define tol 0.00001
using namespace std;
double function(double x){
    return pow(x,3) - 5 * x + 1;// function
}
void secant(double a, double b){
    // function
    double ans;
    double temp;
    while(fabs(a-b)>tol){
        ans = (a*function(b) -b*function(a))/(function(b) - function(a)) ;
        a = b;
        b = ans;
        cout<<"Root "<< ans << endl;

    }
}
int main(){
    // main function

    // entering the initial approximation
    double a,b;
    cout<<"Enter the value of initial approximations x0 and x1"<<endl;
    cin>>a>>b;
    secant(a,b);
    return 0;
}

// main logic magic method

/*

x2 = x0*f(x1)-x1(fx0)/f(x1)- (fx0)
x3 = x1*f(x2)- x2*f(x1)

in a nutshell what we are doing in each iteration is

a = b
b = ans // previous ans 

*/