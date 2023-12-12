#include <iostream>
#include <cmath>
using namespace std;
#define tol 0.00001
double function(double x ){
    return pow(x,3)+2*x+3; //function;
}
double derivative (double x){
    return 3*pow(x,2)+2;// derivative
}
double newton(double a ){
double temp = 0;
    int n = 1;
while(fabs(temp-a)>tol){
    temp = a;
    a = temp - function(temp)/derivative(temp);
    cout<<"x"<<n<<" = "<<a<<endl;
    n++;
}
return a;
}
int main(){
    double a;
    // -1.5
    cout<<"NEWTON RAPHSON METHOD "<<endl<<endl;
    cout<<"Enter the initial approximation or x0"<<endl;
    cin>>a;
    cout<<"The initial approximation entered is "<<a<<endl;
    // calling the main function
    double result = newton(a);
    cout<<"The Final ans is "<<result<<endl;
    return 0;
}


// concept 

/*

x1 = x0(value)  - fx1/fx1`


*/