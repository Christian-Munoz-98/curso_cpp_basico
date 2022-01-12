#include <iostream>

using namespace std;

int main()
{
    char respuesta = 'o';
    int i=0;

    while(respuesta!='y'&&respuesta!='Y')
    {
        cout << i << endl;
        i++;

        cout << "Desea terminar el programa?: ";
        cin >> respuesta;
    }

    cout << "Bye Bye";
}