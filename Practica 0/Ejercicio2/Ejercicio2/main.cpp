#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    int num2;
    int resultado=0;
    cout << "Ingrese un numero: " << endl;
    cin >> num;
    for (;num>0; num=num/10){
        num2=num%10;
        resultado+=pow(num2,num2);
    }
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
