#include <iostream>
using namespace std;

float operator"" _Kelvin(unsigned long long c){
    return float(c-273.15);
}

float operator"" _Fahrenheit(unsigned long long c){
    return float((c-32)/1.8);
}

int main() {
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    cout<<a<<" este 300K in celsius"<<"\n"<<b<<" este 120F in celsius";
    return 0;
}