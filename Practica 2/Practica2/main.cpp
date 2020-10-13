#include <iostream>
using namespace std;
void fun_a(int *px, int *py);
void fun_b(int a[], int tam);
void fun_c(double *, int, double *, double *);
char mensaje[]="Hola";
int main()
{
    while (true){
    int opcion, opcion2, valor;
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, billetes[10]={50000,20000,10000,5000,2000,1000,500,200,100,50};
    double array2[10] = {0.0, 1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.0}, promedio=0.0, suma=0.0;
    unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}};
    cout << "Ingrese 1 para ejercicios u 2 para problemas: ";
    cin >> opcion;
    switch (opcion) {
        case 1:
            cout << "Ingrese el numero del ejercicio que desea validar: ";
            cin >> opcion2;
            switch (opcion2) {
                case 1:
                    fun_b(array, 10);
                break;
                case 2:
                    fun_c(array2, 10, &promedio, &suma);
                    cout << suma << "-" << promedio << endl;
                break;
                case 3:
                    for (int i=0;i<4;i++){
                        for (int o=0;o<2;o++){
                            cout << &b[i][o] << endl;
                        }
                    }
                    cout << b << endl;
                    cout << b+2 << endl;
                    cout << *(b+2) << endl;
                    cout << *(b+2)+1 << endl;
                    cout << *(*(b+2)+1) << endl;
                    cout << b[3][1] << endl;
                break;
            }
        break;
        case 2:
        cout << "Ingrese el numero del problema que desea validar: ";
        cin >> opcion2;
        switch (opcion2) {
            case 1:
                cout << "Ingrese el valor que desea ver la combinacion minima de billetes: ";
                cin >> valor;
                for (int i=0; i<10;i++)
                {
                    if (valor>=billetes[i]){
                        cout << billetes[i] << ":" << (valor/billetes[i]) << endl;
                        valor %=billetes[i];
                    }
                }
                if(valor!=0) cout << "Faltante:" << valor << endl;
            break;
            case 2:

            break;
        }
    }
    }
}
void fun_a(int *px, int *py){
int tmp = *px;
*px = *py;
*py = tmp;
}
void fun_b(int a[], int tam){
int f, l;
int *b = a;
for (f = 0, l = tam -1; f < l; f++, l--) {
fun_a(&b[f], &b[l]);
}
}
void fun_c(double *a, int n, double *promedio, double *suma){
int i;
for (i = 0; i < n; i++) *suma += a[i];
*promedio = *suma / n;
}
