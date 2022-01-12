#include <iostream>


using namespace std;

int main()
{
    int lista[]={100,200,300,400,500,1000,3500,76,32,76,12};
    int limite = sizeof(lista)/sizeof(lista[0]);

    for (int i = 0; i < limite ; i++)
    {
        cout << lista[i]*2 << endl;
    }
    
}
