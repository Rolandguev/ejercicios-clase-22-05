#include <iostream>
using namespace std;
int main()
{
    int numero[100];
    int suma = 0;

    for (int i = 1; i <= 100; i++)
    {
        numero[i] = i + 1;
        suma = suma + numero[i];
    }
    cout << " la suma es: " << suma << endl;

    return 0;
}