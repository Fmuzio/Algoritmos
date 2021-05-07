#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    double a,b,c;
    cout <<" Ingrese los coeficientes en el siguiente orden a,b y c:  " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if( a==0) {
        cout<<"La ecuacion ingresada no es cuadratica." <<endl;
        return 1;

    }

    double x1,x2,discriminante;
    discriminante= b * b - 4 * a * c;

    if( discriminante < 0) {
        cout <<"La ecuacion no tiene soluciones reales."<<endl;
    }
    else {
        x1= (-b + sqrt(discriminante)) / (2*a);
        x2= (-b - sqrt(discriminante)) / (2*a);

        cout <<endl<<"Las raices son las siguientes: "<<endl;
        cout <<"x1= "<< x1<<endl;
        cout <<"x2= "<< x2<<endl;

    }



    return 0;
}
