#include<iostream>
#include<cmath>
using namespace std;

double area(double a, double b){
    return M_PI*a*b;
}

int main(){
    double a,b;1
    cout << "enter a,b: ";
    cin >> a >> b;
    cout << "S = " << area(a,b) << endl;
    return 0;
}

