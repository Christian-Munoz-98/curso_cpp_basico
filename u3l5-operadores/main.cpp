#include <iostream>

using namespace std;

int main()
{
    int a=2, b=3, edades[] = {24,40,7};
    bool c = a<b, d=a>b;
    
    cout << a+b << endl;
    cout << a*b << endl;
    cout << c << endl; //Output = 1 (True)
    cout << d << endl; //output = 0 (False)
    cout << a << endl;
    a+=1;
    cout << a << endl;
    a++;
    cout << a << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(edades) / sizeof(edades[0]);
}