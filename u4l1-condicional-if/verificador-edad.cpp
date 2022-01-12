#include <iostream>

using namespace std;

int main()
{
    int edad;

    cout << "Ingresa tu edad porfavor: ";
    cin >> edad;

    if (edad < 5 || edad > 100 )
        cout << "Edad fuera de rango";
    else
    {    
        if (edad>=18 && edad<=40)
            cout << "Puedes votar!";
        else 
            cout << "No puedes votar";       
    }   
    return 0;
}