#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto = "3.3333";
    cout << stof(texto)*3;
}

/*Librerías estándar de C++:

iostream:
Input/Output (entrada/salida) de datos.
cin >> variable;
cout << variable;

string:
Manejo de cadenas de texto.
string str ("Hola a todos!");
str.pop_back(); // Borra el último carácter de la string

cmath:
Funciones matemáticas comunes como la potencia base^(exponente) en c++:
pow(base, exponente);

exception:
Utilidades para el manejo de errores.
function<int(int,int)> bar;
try {
  cout << bar(10,20) << '\n';
}
catch (bad_function_call& e) // captura la excepción
{
  cout << "ERROR: Esa función está vacía.\n";
}

array:
Manejo de arreglos de datos (matrices de tamaño fijo).
array<int, 0> my_array;   
my_array.empty(); // pregunta si el arreglo está vacío

vector:
Manejo de vectores de datos (representan matrices que pueden cambiar de tamaño).
vector<int> my_vector;
my_vector.push_back (myint); // Agrega un nuevo elemento al final del vector
*/