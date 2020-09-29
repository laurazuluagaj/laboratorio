#include <iostream>

using namespace std;

int main()
{
    int opcion;
    int a;
    int b;
    int resultado;
    int num3;
    int num4;
    int numero;
    float num1;
    float num2;
    float resultado2;
    float resultado3;
    bool pal;
    short fil, col;
    unsigned long long fact=1;
    char j;
    while (true) {
        cout << "Ingrese 1 para ejercicios o 2 para problemas: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            cout << "Ingrese el numero del ejercicio a ejecutar: ";
            cin >> a;
            switch (a) {
                case 1:
                /* Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la división A/B. */
                cout << "Ingrese el primer numero: ";
                cin >> a;
                cout << "Ingrese el segundo numero: ";
                cin >> b;
                resultado=a%b;
                cout << "El residuo de la division " << a << "/" << b << " es: " << resultado << endl;
                break;

                case 2:
                /* Escriba un programa que pida un número N e imprima en pantalla si es par o impar. */
                cout << "Ingrese el numero a evaluar: ";
                cin >> a;
                if ((a%2)==0) cout << a << " es par." << endl;
                else cout << a << " es impar." << endl;
                break;

                case 3:
                /* Escriba un programa que pida dos números A y B e imprima en pantalla el mayor. */
                cout << "Ingrese un numero: ";
                cin >> a;
                cout << "Ingrese otro numero: ";
                cin >> b;
                if (a>b) cout << "El mayor es " << a << endl;
                else if (a==b) cout << "Los numeros son iguales, no existe un numero mayor" << endl;
                else cout << "El mayor es " << b << endl;
                break;

                case 4:
                /* Escriba un programa que pida dos números A y B e imprima en pantalla el menor.*/
                cout << "Ingrese un numero: ";
                cin >> a;
                cout << "Ingrese otro numero: ";
                cin >> b;
                if (a<b) cout << "El menor es " << a << endl;
                else if (a==b) cout << "Los numeros son iguales, no existe un numero menor" << endl;
                else cout << "El menor es " << b << endl;
                break;

                case 5:
                /* Escriba un programa que pida dos números A y B e imprima en pantalla la división A/B con redondeo. */
                cout << "Ingrese el dividendo: ";
                cin >> num1;
                cout << "Ingrese el divisor: ";
                cin >> num2;
                resultado2=num1/num2;
                resultado=int(resultado2);
                if (resultado2>=(resultado+0.5)) cout << num1 << "/" << num2 << "=" << resultado+1 << endl;
                else cout << num1 << "/" << num2 << "=" << resultado << endl;
                break;

                case 6:
                /* Escriba un programa que pida dos números A y B e imprima en pantalla la potencia A^B, sin hacer uso de librerías matemáticas. */
                cout << "Ingrese un numero: ";
                cin >> a;
                resultado=a;
                cout << "Ingrese otro numero: ";
                cin >> b;
                for (int exp = b; exp>1; exp--) resultado=resultado*a;
                cout << a << "^" << b << "=" << resultado << endl;
                break;

                case 7:
                /* Escriba un programa que pida un número N e imprima en pantalla la suma de todos los números entre 0 y N (incluyéndose el mismo). */
                cout << "Ingrese un numero: ";
                cin >> a;
                resultado=0;
                for (int cont=1;cont<=a;cont++) resultado+=cont;
                cout << "La sumatoria desde 0 hasta " << a << " es: " << resultado << endl;
                break;

                case 8:
                /* Escriba un programa que pida un número N e imprima en pantalla su factorial. */
                cout << "Ingrese el numero a encontrarle el factorial: ";
                cin >> a;
                for (int i=a; i>=2; i=i-1){
                    fact=fact*i;
                }
                cout << a << "!="<< fact << endl;
                fact=1;
                break;

                case 9:
                /* Escriba un programa que pida un número N e imprima el perímetro y área de un círculo con radio N. Nota: use 3.1416 como una aproximación de pi. */
                cout << "Ingrese el radio del circulo: ";
                cin >> num1;
                resultado2=2*3.1416*num1;
                resultado3=3.1416*(num1*num1);
                cout << "Perimetro: " << resultado2 << endl;
                cout << "Area: " << resultado3 << endl;
                break;

                case 10:
                /*Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos de dicho número entre 1 y 100.*/
                cout << "Ingrese un numero: ";
                cin >> a;
                for (int mult=a;mult<=100; mult+=a) cout << mult << endl;
                break;

                case 11:
                /*Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN.*/
                cout << "Ingrese un numero: ";
                cin >> a;
                for (int i=1;i<=10;i++)
                {
                    cout << i << "x" << a << "=" << (i*a) << endl;
                }
                break;

                case 12:
                /* Escriba un programa que pida un número N e imprima todas las potencias desde N1 hasta N5. */
                cout << "Ingrese un numero: ";
                cin >> a;
                resultado=a;
                for (int i=1;i<=5;i++)
                {
                    cout << a << "^" << i << "=" << resultado << endl;
                    resultado*=a;
                }
                break;

                case 13:
                /* Escriba un programa que pida un número N e imprima todos los divisores de N. */
                cout << "Ingrese un numero: ";
                cin >> a;
                for (int div=1;div<=a;div++)
                {
                    resultado=a%div;
                    if (resultado==0) cout << div << endl;
                }
                break;

                case 14:
                /* Escriba un programa que imprima dos columnas paralelas, una con los números del 1 al 50 y otra con los números del 50 al 1. */
                a=1;
                b=50;
                for (;a<=50;a++, b--)
                {
                    if (a<10) cout << a << "   " << b << endl;
                    else cout << a << "  " << b << endl;
                }
                break;

                case 15:
                /* Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla la suma de todos los números ingresados. */
                a=1;
                resultado=0;
                while (a!=0)
                {
                    cout << "Ingrese un numero: ";
                    cin >> a;
                    resultado+=a;
                }
                cout << "El resultado de la sumatoria: " << resultado << endl;
                break;

                case 16:
                /* Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero). */
                a=1;
                resultado2=0;
                b=0;
                while (a!=0)
                {
                    cout << "Ingrese un numero: ";
                    cin >> a;
                    resultado2+=a;
                    b++;
                }
                cout << "El promedio es: " << (resultado2/(b-1)) << endl;
                break;

                case 17:
                /* Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el mayor de todos los números ingresados. */
                a=1;
                b=0;
                while (a!=0)
                {
                    cout << "Ingrese un numero: ";
                    cin >> a;
                    if (a>b) b=a;
                }
                cout << "El numero mayor fue: " << b << endl;
                break;

                case 18:
                /* Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto. */
                cout << "Ingrese un numero: ";
                cin >> a;
                for (int i=1;i<=(a/2);i++)
                {
                    if ((i*i)==a){
                        cout << a << " es un cuadrado perfecto" << endl;
                        i=a;
                    }
                    if (i==(a/2)) cout << a << " NO es un cuadrado perfecto" << endl;
                }
                break;

                case 19:
                /* Escriba un programa que pida un número N e imprima si es o no un número primo. */
                cout << "Ingrese un numero: ";
                cin >> a;
                for (int i=2;i<a;i++)
                {
                    if ((a%i)==0){
                        cout << a << " NO es un numero primo." << endl;
                        i=a;
                    }
                    if (i==(a-1)) cout << a << " es un numero primo." << endl;
                }
                break;

                case 20:
                /* Escriba un programa que pida un número N e imprima si es o no un palíndromo (igual de derecha a izquierda que de izquierda a derecha). */
                cout << "Ingrese un numero: ";
                cin >> a;
                numero=a;
                resultado=0;
                b=10;
                pal=true;
                for (int i=a; i>0;resultado++)
                {
                    i=i/10;
                }
                for (int i=1; i<(resultado-1); i++)
                {
                    b=b*10;
                }
                resultado=a;
                for (;b>=1; b=b/10)
                {
                    num3=a/b;
                    a=a%b;
                    num4=resultado%10;
                    resultado=resultado/10;
                    if (num3!=num4)
                    {
                        b=0;
                        pal=false;
                    }
                }
                if (pal==true) cout << numero << " es un numero palindromo." << endl;
                else cout << numero << " NO es un numero palindromo." << endl;

                break;

                case 21:
                /* Escriba un programa que pida un carácter C, si es una letra la debe convertir de mayúscula a minúscula y viceversa e imprimirla. */
                cout << "Ingresa un caracter: ";
                cin >> j;
                a=int(j);
                if (a>=65 && a<=90) a+=32;
                else if (a>=97 && a<=122) a-=32;
                j=char(a);
                cout << "Letra convertida: " << j << endl;
                break;

                case 22:
                /* Escriba un programa que pida una cantidad entera de segundos y la imprima en formato horas:minutos:segundos. */
                cout << "Ingrese la cantidad de segundos a convertir: ";
                cin >> a;
                b=a/3600;
                a=a%3600;
                resultado = a/60;
                a=a%60;
                cout << b << ":" << resultado << ":" << a << endl;
                break;

                case 23:
                /* Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo común múltiplo entre los dos. */
                cout << "Ingrese un numero: ";
                cin >> a;
                cout << "Ingrese el segundo numero: ";
                cin >> b;
                resultado=0;
                if (a>b)
                {
                    num3=a;
                    num4=b;
                }
                else
                {
                    num3=b;
                    num4=a;
                }
                pal=true;
                for (int i=1; pal==true; i++)
                {
                    resultado=num3*i;
                    if ((resultado%num4)==0) pal=false;
                }
                cout << "El MCM de " << a << " y " << b << " es: " << resultado << endl;
                break;

                case 24:
                /* Escriba un programa que pida una número entero e imprima un cuadrado de dicho tamaño, los bordes del cuadrado deben estar hechos con el carácter '+' y el interior debe estar vacío. */
                fil=1;
                col=1;
                cout << "Ingrese un numero: ";
                cin >> a;
                for(;fil<=a;fil++)
                {
                    for (col=1;col<=a;col++)
                    {
                        if (fil==1 || fil==a || col==a || col==1) cout << "+";
                        else cout << " ";
                    }
                    cout << endl;
                }
                break;

                case 25:
                /* Escriba un programa que pida un número N e imprima en pantalla la cantidad de dígitos de N. */
                cout << "Ingrese un numero: ";
                cin >> a;
                numero=0;
                for (int i=a; i>0;numero++)
                {
                    i=i/10;
                }
                cout << a << " tiene " << numero << " digitos." << endl;
                break;

                case 26:
                /* Escriba un programa que pida tres números e imprima el tipo de triangulo (isósceles, equilátero, escaleno) que se formaría, si sus lados tienen la longitud denida por los números ingresados.
                Tenga en cuenta el caso en que los números ingresados no forman un triángulo. */
                cout << "Ingrese la longitud del primer lado del triangulo: ";
                cin >> a;
                cout << "Ingrese la longitud del segundo lado: ";
                cin >> b;
                cout << "Ingrese la longitud del tercer lado: ";
                cin >> num3;

                break;
            }
        break;

        case 2:
            cout << "Ingrese el numero del problema a ejecutar: ";
            cin >> a;
            switch (a) {
                case 1:
                    cout << "Ingrese el caracter; ";
                    cin>> j;
                    a = int(j);
                    if ((a>=65 && a <=90)||(a>=97 && a<=122)){
                        if (a==65 || a ==69 || a==73 || a==79 || a==85) cout << "Es una vocal mayuscula"<< endl;
                        else if (a==97 || a==101 || a==105 || a==111 || a==117) cout << "Es una vocal minuscula" << endl;
                        else cout << "Es una consonante" << endl;
                    }
                    else cout << "No es una letra" << endl;
                break;
            }
         break;
        }
     }
    return 0;
}
