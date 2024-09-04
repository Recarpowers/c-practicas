#include <iostream>
using namespace std;

int main()
{
    float base;
    float altura;
    float perimetro;
    float area;
    cout<<"Ingrese la base del rectangulo" <<endl;
    cin>>base;
    cout<<"Ingrese la altura del triangulo"<<endl;
    cin>>altura;
        perimetro = altura + base;
        area = altura*base;
    cout << "El area es :" << area << " " << "El perimetro es: "<< perimetro << endl;
 
    return 0;
}
