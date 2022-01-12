#include <iostream>

using namespace std;

int main()
{
    bool resultado = true && true;
    cout << resultado << endl;

    resultado = true || true;
    cout << resultado << endl;

    resultado = true || false;
    cout << resultado << endl;

    resultado = false || false;
    cout << resultado << endl;

    resultado = !true;
    cout << resultado << endl;    

}