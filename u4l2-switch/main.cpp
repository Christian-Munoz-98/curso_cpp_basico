#include <iostream>

using namespace std;

int main()
{
    int option;

    cout << "Ingrese una opcion: ";
    cin >> option;

    switch (option)
    {
        case 0:
            cout << "Elijio la opcion 0";
            break;
        case 1:
            cout << "Elijio la opcion 1";
            break;
        case 2:
            cout << "Elijio la opcion 2";
            break;
        case 3:
            cout << "Elijio la opcion 3";
            break;
        case 4:
            cout << "Elijio la opcion 4";
            break;     
        default:
            cout << "Opcion invalida";
            break;
    }

    return 0;
}