#include <iostream>
#include <cmath>
#define tol 0.0001
double function(double x){
    return 3*x - cos(x)- 1;
}
double bisection(double a, double b){
    while((b-a)>tol){
    double mid = (a+b)/2;
    if(function(mid)*function(a)<0){
        b = mid;
    }
    else{
        a = mid;
    }

    return mid;

    }

}
using namespace std;
int main(){
    double a,b;
    cout<<"Enter the initial approximations a and b respectively"<<endl;
    cin>>a>>b;
    double root = bisection(a,b);
    cout<<"Final root is "<<root<<endl;

    return 0;
}