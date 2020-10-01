#include <iostream>
#include <cstdlib>

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
                if ((a+b)>num3 && (a+num3)>b && (b+num3)>a)
                {
                    if (a==b || a==num3)
                    {
                        if (b==num3) cout << "Se forma un triangulo equilatero." << endl;
                        else cout << "Se forma un triangulo isosceles." << endl;
                    }
                    else if (b==num3) cout << "Se forma un triangulo isosceles." << endl;
                    else cout << "Se forma un triangulo escaleno." << endl;
                }
                else cout << "Las longitudes ingresadas no forman un triangulo." << endl;
                break;

                case 27:
                /* Escriba un programa que actúe como una calculadora con operaciones de suma, resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar. */
                cout << "Ingrese numero: ";
                cin >> a;
                cout << "Ingrese operador: ";
                cin >> j;
                cout << "Ingrese numero: ";
                cin >> b;
                resultado=int(j);
                if (resultado==43) cout << a << j << b << "=" << (a+b) << endl;
                else if (resultado==45) cout << a << j << b << "=" << (a-b) << endl;
                else if (resultado==42) cout << a << j << b << "=" << (a*b) << endl;
                else if (resultado==47) cout << a << j << b << "=" << (a/b) << endl;
                else cout << "Operacion no valida." << endl;
                break;

                case 28:
                /* Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente suma infinita: */
                cout << "Ingrese el numero para la aproximacion de pi: ";
                cin >> a;
                resultado2=0;
                for (int i=1;a>0;a--, i+=2)
                {
                    if ((a%2)==0) resultado2-=(1/float(i));
                    else resultado2+=(1/float(i));
                }
                cout << "pi es aproximadamente: " << (4*resultado2) << endl;
                break;

                case 29:
                /* Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el
                usuario (el número NO se ingresa al programa), el programa imprimirá en pantalla un número B y
                el usuario usará los símbolos '>', '<' y '=' para indicarle al programa si B es mayor, menor o igual
                que A. El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y
                repetira el proceso hasta acertar el número seleccionado por usuario. */
                pal=true;
                a=0;
                num3=a;
                num4=100;
                while (pal)
                {
                    cout << "El numero seleccionado es " << a << "?";
                    cin >> j;
                    b=int(j);
                    if (b==61)
                    {
                        cout << "Gracias por participar." << endl;
                        pal=false;
                    }
                    else if (b==62) num3=a;
                    else if (b==60) num4=a;
                    a=(num3+num4)/2;
                }
                break;

                case 30:
                /* Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al
                usuario que lo adivine, el usuario ingresa un número B y el programa le dirá si B es mayor o menor
                que A, esto se repetirá hasta que el usuario adivine el número, en ese momento el programa le dirá
                el número de intentos que tardo el usuario en adivinar el número. */
                a=rand()%101;
                pal=true;
                for (int i=1; pal==true; i++)
                {
                    cout << "Cual crees que es el numero oculto: ";
                    cin >> b;
                    if (b==a)
                    {
                        cout << b << " era el numero oculto. Felicidades!. Fueron " << i << " intentos" << endl;
                        pal=false;
                    }
                    else if (b<a) cout << "El numero oculto es mayor al que ingresaste." << endl;
                    else cout << "El numero oculto es menor al que ingresaste." << endl;
                }
                break;
            }
        break;

        case 2:
            cout << "Ingrese el numero del problema a ejecutar: ";
            cin >> a;
            switch (a) {
                case 1:
                    cout << "Ingrese el caracter: ";
                    cin>> j;
                    a = int(j);
                    if ((a>=65 && a <=90)||(a>=97 && a<=122)){
                        if (a==65 || a ==69 || a==73 || a==79 || a==85) cout << j << " es una vocal mayuscula"<< endl;
                        else if (a==97 || a==101 || a==105 || a==111 || a==117) cout << j<< " es una vocal minuscula" << endl;
                        else cout << j << " es una consonante" << endl;
                    }
                    else cout << "No es una letra" << endl;
                break;

                case 2:
                /* Se necesita un programa que permita determinar la mínima combinación de billetes
                y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
                $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
                Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar
                la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
                cantidad deseada, el sistema deberá decir lo que resta para lograrla. */
                cout << "Ingrese el valor al cual le desea ver la combinacion: ";
                cin >> a;
                num4=1000;
                for (b=10000;b>=10; b=b/10)
                {
                    for(num3=5;(num3>=1) && ((num3*b)>=50);num3--)
                    {
                        num4=a/(num3*b);
                        a=a%(num3*b);
                        cout << (num3*b) << " : " << num4 << endl;
                        if (num3==5) num3-=2;
                    }
                }
                cout << "Faltante: " << a << endl;
                break;

                case 3:
                /* Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
                si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero, en dicho caso
                imprimir posiblemente año bisiesto". */
                cout << "Ingrese el mes que desea validar (1-12): ";
                cin >> a;
                if (a>=1 && a<=12)
                {
                    cout << "Ingrese el dia a validar: ";
                    cin >> b;
                    if (b<31)
                    {
                        if (a==2 && b==29) cout << b << "/" << a << " es valida en bisiesto." << endl;
                        else cout << b << "/" << a << " es una fecha valida." << endl;
                    }
                    else if (b==31)
                    {
                        if (a!=4 && a!=6 && a!=9 && a!=11) cout << b << "/" << a << " es una fecha valida." << endl;
                        else cout << b << "/" << a << " es una fecha invalida." << endl;
                    }
                    else cout << b << "/" << a << " es una fecha invalida." << endl;

                }
                else cout << a << " es un mes invalido." << endl;
                break;

                case 4:
                /* Escriba un programa para leer dos números enteros con el siguiente significado: el
                valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
                representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de duraci
                ón de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe
                sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
                1630, que es el tiempo de 3 horas y 45 minutos después de 12:45. */
                cout << "Ingrese la hora del dia (HHmm): ";
                cin >> a;
                num3=a%100;
                a=a/100;
                if (num3<0 || num3>59 || a<1 || a>24)
                {
                    cout << a << num3 << " es un tiempo invalido." << endl;
                }
                cout << "Ingrese el tiempo de duracion (HHmm): ";
                cin >> b;
                num4=b%100;
                b=b/100;
                if (num4<0 || num4>59 || b<1 || b>24)
                {
                    cout << b << num4 << " es un tiempo invalido." << endl;
                }
                num3=(num3+num4);
                a=a+b+(num3/60);
                num3=(num3%60);
                if (a>24) a-=24;
                cout << "La hora es " << a << num3 << endl;
                break;

                case 5:
                /* Escriba un programa que muestre un rombo en la pantalla: */
                cout << "Ingrese un numero impar para la longitud: ";
                cin >> a;
                fil=1;
                col=1;
                b=(a/2)+1;
                num3=b;
                for(;fil<=a; fil++)
                {
                    for (col=1;col<=a;col++)
                    {
                        if (col>=b && col<=num3) cout << "*";
                        else cout << " ";
                    }
                    cout << endl;
                    if (fil>=(a/2)+1)
                    {
                        b++;
                        num3--;
                    }
                    else
                    {
                       b--;
                       num3++;
                    }
                }
                break;

                case 6:
                /* Escriba un programa que encuentre el valor aproximado del número de euler en base
                a la siguiente suma infinita: El usuario debe ingresar el número de elementos usados en la aproximación.*/
                cout << "Ingrese el numero de elementos para hacer la aproximacion: ";
                cin >> a;
                resultado2=0;
                for (int i=0 ;a>0;a--, i++)
                {
                    num1=1;
                    for (int c=1;c<=i;c++) num1=(num1*c);
                    resultado2+=(1/num1);
                }
                cout << "e es aproximadamente: " << resultado2 << endl;
                break;

                case 7:
                /* En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y 1. */
                cout << "Introduce numero mayor que 1: ";
                cin >> a;
                b=1;
                num3=1;
                resultado=0;
                for(int i=2;i<=a && num3<a;i++)
                {
                    num3 = b + num3;
                    b = num3 - b;
                    if ((num3%2)==0) resultado+=num3;
                }
                cout << "El resultado de la suma es: " << resultado << endl;

                break;

                case 8:
                /* Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
                múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes. */
                cout << "Ingrese el primer numero: ";
                cin >> a;
                cout << "Ingrese el segundo numero: ";
                cin >> b;
                cout << "Ingrese el tercer numero: ";
                cin >> num3;
                resultado=0;
                for (int i=1; (a*i)<num3; i++)
                {
                    resultado+=(a*i);
                    cout << (a*i);
                    if ((a*(i+1))<num3) cout << "+";
                }
                for (int i=1; (b*i)<num3; i++)
                {
                    cout << "+";
                    if (((b*i)%a)!=0)
                    {
                        resultado+=(b*i);
                        cout << (b*i);
                    }
                }
                cout << " = " << resultado << endl;
                break;

                case 9:
                /* Escriba un programa que pida un número entero N e imprima el resultado de la suma
                de todos sus dígitos elevados a sí mismos. */
                cout << "Ingrese un numero para la suma de sus digitos al cuadrado: ";
                cin >> a;
                resultado=0;
                for (;a>0;a=(a/10))
                {
                    b=(a%10);
                    num3=b;
                    for (int i=1;i<b;i++) num3=num3*b;
                    resultado+=num3;
                }
                cout << "El resultado de la suma es: " << resultado << endl;
                break;

                case 10:
                /* Escriba un programa que reciba un número n e imprima el enésimo número primo. */
                cout << "Ingrese un numero: ";
                cin >> a;
                b=1;
                for (int i=1; i<=a;)
                {
                    b++;
                    pal=true;
                    for (int c=2;pal;c++)
                    {
                        if ((b%c)==0)
                        {
                            if (c==b) i++;
                            pal=false;
                        }
                    }
                }
                cout << "El primo numero " << a << " es: " << b << endl;
                break;

                case 11:
                /*Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
                todos los números enteros entre 1 y el número ingresado. */
                cout << "Ingrese un numero para validar MCM: ";
                cin >> a;
                pal=true;
                for (int i=1; pal; i++)
                {

                }
                break;
            }
         break;
        }
     }
    return 0;
}
