#include <iostream>

using namespace std;

int main()
{
    char respuesta = 'o';
    for(int i=0;i<10000;i++)
    {
        cout << i << endl;
        cout << "Desea terminar el programa?: ";
        cin >> respuesta;

        if(respuesta == 'y')
        {
            cout << "Bye Bye";
            break;
        }
    }
}