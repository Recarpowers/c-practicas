#include <iostream>
using namespace std; 
int main()
{
    int ars=1300;
    float dolares;
    float division=1;
    float monto;
    cout<<"Introduzca el monto deseado"<<endl;
    cin>>monto;
    dolares= monto/ars*division;
    cout<<"el monto de : "<<monto<<" "<<"son de : "<<dolares<<endl;
    return 0;
}

