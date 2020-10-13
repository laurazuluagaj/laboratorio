/* Códigos a corregir
 * A continuación se presentan los códigos para realizar la parte de la sustentación que
 * tiene que ver con la corrección de errores. Para este ejercicio debe corregir las
 * fallas que encuentre en su código y subir el archivo con el nombre corregir.cpp al
 * classroom, borre los códigos que no tiene que revisar. No debe agregar o modificar más
 * de 3 líneas para corregir el error en ningún caso.
 */

#include <iostream>

using namespace std;

bool pal(int a){
    int a2=a, num=0;
    for(;a!=0;a/=10) num=10*num+a%10;
    return num==a2;
}
int main()
{
    int opcion=0;
    int n;
    int m, b, num3, col, fil;
    while (opcion!=1 && opcion!=2){
    cout << "Ingresar 1 para ejercicio sustentacion o 2 para ejercicio corregido: ";
    cin >> opcion;
    }
    switch (opcion) {
    case 1:
    /* Realice un programa que reciba dos números enteros positivos n y m. Si n=1,
    entonces el programa debe imprimir en consola un triángulo de tenga m asteriscos
    por cada lado, el cual debe apuntar hacia arriba. Si n=2, entonces el programa debe
    imprimir en consola un trapecio de base mayor m y base menor 0.5m (es decir, m
    representa el número de asteriscos de la base mayor), donde cada fila del trapecio
    debe tener una unidad menos de asteriscos que la fila siguiente.*/
    cout << "Ingrese 1 para imprimir triangulo u 2 para imprimir trapecio: ";
    cin >> n;
    cout << "Ingrese un numero para la longitud: ";
    cin >> m;
    switch (n){
    case 1:
    fil=1;
    col=1;
    b=m;
    num3=b;
    for(;fil<=m; fil++)
    {
        for (col=1;col<=m;col++)
        {
            if (col>=b && col<=num3) cout << "* ";
            else cout << " ";
        }
        cout << endl;
        b--;
        num3++;
    }
    break;
    case 2:
        fil=1;
        col=1;
        num3=(m/2);
        for(;fil<=((m/2)+1); fil++)
        {
            for (col=1;col<=m;col++)
            {
                if (col<=num3) cout << "*";
                else cout << " ";
            }
            cout << endl;
            num3++;
        }
    break;
    }
    break;

    case 2:
    /*Ejercicio 3
     El siguiente programa debe imprimir en pantalla un triángulo en base a caracteres *, donde cada lado siempre
     tiene una unidad de * mas que el lado anterior. El tamaño del triángulo lo ingresa el usuario.
            *
           * *
          * * *
     */

    int dim;
    cout << "Ingrese el tamano del triangulo: ";
    cin>> dim;
    for(int fil=0;fil<=dim;fil++){
        for(int col=0;col<((dim*2)-1);col++){
            if(fil>=dim-col-1 && fil>=col+1-dim && (col%2!=fil%2)) cout << '*';
            else cout << ' ';
        }
        cout << endl;
     }
     break;
    }

    return 0;
}



