#include <iostream>

using namespace std;

int main()
{
    char respuesta = 'y';
    int i=0;

    do
    {
        cout << i << endl;
        i++;

        cout << "Desea terminar el programa?: ";
        cin >> respuesta;
    }
    while(respuesta!='y'&&respuesta!='Y');
    cout << "Bye Bye";
}