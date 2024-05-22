#include <iostream>
using namespace std;

int main()
{
    string nombre[5];
    for (int i = 0; i < 5 ; i++)
    {
        cout << "Ingrese un nombre: " << "\n";
        cin >> nombre[i];
    }
    
    for (int j = 0; j < 5 ; j++)
    {
        cout << " nombre " << j + 1 << nombre [j] << "\n";
    }
    

    return 0;
}
