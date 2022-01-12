#include <iostream>

using namespace std;

int main()
{
    char respuesta = 'n';
    int i=0;

    while(true)
    {
        cout << i << endl;
        i++;

        cout << "Desea terminar?: ";
        cin >> respuesta;

        if(respuesta=='y' || respuesta=='Y')
        {
            cout << "Bye Bye";
            break;
        }
    }
}
