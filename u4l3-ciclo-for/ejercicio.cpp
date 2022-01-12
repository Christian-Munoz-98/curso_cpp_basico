#include <iostream>
    
using namespace std;

int main()
{
    int limite;

    cout << "Ingresa el limite: ";
    cin >> limite;

    cout << "Numeros pares:" << endl;

    for (int i = 1; i <= limite ; i++)
    {
        if(!(i%2))
            cout << i << endl;
    }
}

   