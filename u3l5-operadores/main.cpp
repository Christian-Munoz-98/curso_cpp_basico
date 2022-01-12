#include <iostream>

using namespace std;

int main()
{
    int a=2, b=3, edades[] = {24,40,7};
    bool c = a<b, d=a>b;
    
<<<<<<< HEAD
    cout << "a+b= " << a+b << endl;
    cout << "a*b=" << a*b << endl;
    cout << "a<b? "<< c << endl; //Output = 1 (True)
    cout << "a>b? "<< d << endl; //output = 0 (False)
    cout << "a= "<< a << endl;
    a+=1;
    cout << "a= "<< a << endl;
    a++;
    cout << "a= " << a << endl;
    cout << "Tamano de a = " << sizeof(a) << "bytes" << endl;
    cout << "Tamano de la lista = " << sizeof(edades) / sizeof(edades[0]);
=======
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
>>>>>>> a180c966ec5edde66f57570a46e0cdfadbb870b5
}