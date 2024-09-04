#include <iostream>
using namespace std;

int main()
{
    float cms;
    float mts=1;
    float division = 100;
    float resultado;
    cout <<"introducir medida"<<endl;
        cin>>cms;
        resultado = cms*mts/division;
     cout<<"la conversion es: "<<resultado<<"mts"<<endl;
    
    return 0;
    
}

