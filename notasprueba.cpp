#include <iostream>
using namespace std;
int main()
{
    string nombre;
    float Nota1, Nota2, Nota3, Nota4, Nota5, Nota6, Promedio;

    cout << "nombre: ";
    cin >> nombre;

    cout << "ingrese su nota 1: ";
    cin >> Nota1;
    
    cout << "ingrese su nota 2: ";
    cin >> Nota2;
    
    cout << "ingrese su nota 3: ";
    cin >> Nota3;
    
    cout << "ingrese su nota 4: ";
    cin >> Nota4;
    
    cout << "ingrese su nota 5: ";
    cin >> Nota5;
    
    cout << "ingrese su nota 6: ";
    cin >> Nota6;
    Promedio = (Nota1 + Nota2 + Nota3 + Nota4 + Nota5 + Nota6) / 6;
    cout << "nota del promedio es: " << Promedio << "\n";

    return 0;
}