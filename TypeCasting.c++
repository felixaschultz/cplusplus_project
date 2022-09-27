/* 
    Learning C++
    TypeCasting
 */
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

float flt = -7.44f;
int32_t sgn;
unint32_t unsgn;

int main()
{
    sgn = flt;
    unsgn = sgn;

    cout << "Float: " << flt << endl;
    cout << "int32: " << sgn << endl;
    cout << "unint32" << unsgn << endl;

    int fahrenheit = 100;
    int celcius;

    celcius = ((float)5 / 9.0) * (fahrenheit - 32);

    cout << endl;
    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Celcius: " << celcius << endl;

    float weight = 10.99;
    cout << endl;
    cout << "Float: " << weight << endl;
    cout << "Integer part: " << (int) weight << endl;
    cout << "Fractional part: " << (int)((weight - (int) weight) * 10000) << endl;

    return (0);
}