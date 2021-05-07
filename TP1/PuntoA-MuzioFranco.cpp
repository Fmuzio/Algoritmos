#include <iostream>

using namespace std;

int main()
{
    double valorIngresado;
    cout << "Ingrese en el valor que desea convertir: " << endl;
    cin >> valorIngresado;

    double valorConv;
    valorConv= valorIngresado * 3.6;

    cout <<"El valor convertido es el siguiente: " << valorConv << endl;

    return 0;
}
