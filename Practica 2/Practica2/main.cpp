#include "libreria.h"

char mensaje[]="Hola";
int main()
{
    cout << "************************PRACTICA #2************************" << endl;
    cout << "Laura Zuluaga Jaramillo C.C. 1045049175" << endl;
    cout << endl;
    while (true){
    int opcion, opcion2, valor;
    char ensayo2[]={'h','o','l','a',' ','a','m','i','g','o','s'};
    int billetes[10]={50000,20000,10000,5000,2000,1000,500,200,100,50}, contador;
    double promedio=0.0, suma=0.0;
    unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}};
    cout << "Ingrese 1 para ejercicios u 2 para problemas: ";
    cin >> opcion;
    switch (opcion) {
        case 1:
            cout << "1-> Codigo de la guia." << endl;
            cout << "2-> Funcion que calcula suma y promedio." << endl;
            cout << "3-> Valor correspondiente a expresiones de la guia." << endl;
            cout << endl;
            cout << "Ingrese el numero del ejercicio que desea validar: ";
            cin >> opcion2;
            switch (opcion2) {
                case 1:{
                    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
                    fun_b(array, 10);
                }
                break;
                case 2:{
                    double array2[10] = {0.0, 1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.0};
                    fun_c(array2, 10, &promedio, &suma);
                    cout << suma << "-" << promedio << endl;
                }
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
        cout << "1-> Minima combinacion de billetes." << endl;
        cout << "2-> Arreglo de 200 letras mayusculas." << endl;
        cout << "3-> Comparacion de dos cadenas de caracteres." << endl;
        cout << "4-> Conversion cadena de caracteres a enteros." << endl;
        cout << "5-> Conversion numero entero a cadena de caracteres." << endl;
        cout << "6-> Conversion de minusculas a mayusculas." << endl;
        cout << "7-> Eliminacion caracteres repetidos de cadena de caracteres." << endl;
        cout << "8-> Separacion de texto y numero en cadena de caracteres." << endl;
        cout << "9-> Separacion en n cifras y suma de ellas." << endl;
        cout << "10-> Conversion de romano a arabigo." << endl;
        cout << "11-> Sala de cine." << endl;
        cout << "12-> Cuadro magico." << endl;
        cout << endl;
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
            case 2:{
                char letras[200]={}, letra;
                for (int i=0;i<200;i++){
                    letras[i]=rand()%(90-65+1)+65;
                }
                cout << letras << endl;
                letra=65;
                for(letra=65;letra<=90;letra++){
                    contador=0;
                    for (int i=0;i<200;i++){
                        if(letras[i]==letra) contador++;
                    }
                    if (contador!=0) cout << letra << ": " << contador << endl;
                }
            }
            break;
            case 3:{
                bool resp;
                char ensayo[]={'h','o','l','a',' ','a','m','i','g','o'};
                if(sizeof(ensayo)==sizeof(ensayo2)){
                    resp=fun_d(ensayo,ensayo2,sizeof(ensayo));
                    if(resp) cout << "Son iguales." << endl;
                    else cout << "No son iguales." << endl;
                }
                else cout << "No son iguales." << endl;
            }
            break;
            case 4:{
                int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
                valor=fun_e(array,(sizeof(array)/4));
                cout << valor << endl;
            }
            break;
            /* Haga una función que reciba un numero entero (int) y lo convierta a cadena de caracteres. Use
            parámetros por referencia para retornar la cadena. Escriba un programa de prueba.
            Ejemplo: si recibe un int con valor 123, la cadena que se retorne debe ser “123”.*/
            case 5:{
                int numero, cadena[]={}, *p, tam=0;
                    cout << "Ingrese un numero entero: ";
                    cin >> numero;
                    p=cadena;
                    fun_f(numero, p, &tam);
                    for(int i=0;i<tam;i++){
                        cout << *(p+i);
                    }
                    cout << endl;
            }
            break;
            /*Escriba un programa que reciba una cadena de caracteres y cambie las letras minúsculas por mayúsculas,
            los demás caracteres no deben ser alterados.*/
            case 6:{
                char cadena[]={}, mayuscula[]={};
                cout << "Ingrese cadena de caracteres: ";
                cin >> cadena;
                strcpy(mayuscula, cadena);
                cout << "Original: " << cadena << ". En mayuscula: " << strupr(mayuscula) << endl;
            }
            break;

            /*Escriba un programa que reciba una cadena de caracteres y elimine los caracteres repetidos.*/
            case 7:{
                char cadena[]={};
                int tam=0;
                cout << "Ingrese frase: ";
                cin >> (cadena);
                tam= strlen(cadena);
                fun_g(cadena, tam);
            }
            break;

            /*Escriba un programa que reciba una cadena de caracteres y separe los números del resto de caracteres,
            generando una cadena que no tiene números y otra con los números que había en la cadena original.*/
            case 8:{
                char cadena[]={}, texto[50]={}, numeros[50]={};
                int tam=0, valor, tam2=0, tam3=0;
                cout << "Ingrese cadena de caracteres: ";
                cin >> cadena;
                cout << "Original: " << cadena << endl;
                tam=strlen(cadena);
                for(int i=0; i<tam; i++){
                    valor=cadena[i];
                    if(valor>47 && valor<58){
                        numeros[tam2]=valor;
                        tam2++;
                    }
                    else{
                        texto[tam3]=valor;
                        tam3++;
                    }
                }
                cout << "Texto: " << texto << ". Numero: " << numeros << endl;
            }
            break;

            /*Escribir un programa que reciba un número n y lea una cadena de caracteres numéricos, el programa
            debe separar la cadena de caracteres en números de n cifras, sumarlos e imprimir el resultado. En caso de no poderse
            dividir exactamente en números de n cifras se colocan ceros a la izquierda del primer número.*/
            case 9:{
                int numero, tam, suma=0, valor=0, num;
                char numeros[20]={};
                cout << "Ingrese el numero de cifras: ";
                cin >> numero;
                cout << "Ingrese una cadena de caracteres tipo numero: ";
                cin >> numeros;
                tam=strlen(numeros);
                for(int i=(tam-1); i>=0;){
                    for(int t=0, p=1; t<numero && i>=0; p*=10, i--, t++){
                        num=numeros[i]-48;
                        valor+=(num*p);
                    }
                    suma+=valor;
                    valor=0;
                }
                cout << "Original: " << numeros << endl;
                cout << "Suma: " << suma << endl;
            }
            break;

            /* Escribir un programa que permita convertir un número en el sistema romano al sistema arábigo
            usado actualmente. A continuación se encuentran los caracteres usados en el sistema romano y su equivalente arábigo*/
            case 10:{
                char romano[]={}, romanos[7]={'M', 'D', 'C', 'L', 'X', 'V', 'I'};
                int i=0, final=1, letra, valores[7]={1000, 500, 100, 50, 10, 5, 1}, num1=0, num2=0, valor=0;
                cout << "Ingrese numero en romano e ingrese cualquier numero (0-9) para finalizar (Solo mayusculas): " << endl;
                while(final!=0){
                cin >> romano[i];
                letra=romano[i];
                if ((letra<65 || letra>90) && (letra<97 || letra>122)){
                    final=0;
                    romano[i]='\n';
                }
                i++;
                }
                for(int i=0;romano[i]!='\n';i++){
                    for(int a=0; a<7; a++){
                        if(romano[i]==romanos[a]) num1=valores[a];
                    }
                    if(num1<=num2) valor+=num1;
                    else if (i==0) valor+=num1;
                    else{
                        valor-=(2*num2);
                        valor+=num1;
                    }
                    num2=num1;
                }
                cout << "El numero ingresado fue: " << romano;
                cout << "Que corresponde a: " << valor << endl;
            }
            break;

            /*Escriba un programa que permita manejar las reservas de asientos en una sala de cine, los asientos de
            la sala de cine están organizados en 15 filas con 20 asientos cada una. El programa debe mostrar una representación
            de la sala que indique que asientos están disponibles y cuales se encuentran reservados. Además debe permitir
            realizar reservas o cancelaciones al ingresar la fila (letras A-O) y el número del asiento (números 1-20).*/
            case 11:{
                char sala[15][20]={{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'}}, filas[15]={'A', 'B', 'C','D','E','F','G','H','I','J','K','L','M','N','O'};
                char letra;
                int sel, menu=1, fila=0, columna=0;
                while(menu!=0){
                    cout << "1-> Visualizar sala." << endl;
                    cout << "2-> Reservas." << endl;
                    cout << "3-> Cancelaciones." << endl;
                    cout << "0-> Volver al menu principal." << endl;
                    cout << "Ingrese una de las opciones del menu: ";
                    cin >> sel;
                    switch (sel){
                        case 0:
                        menu=0;
                        break;
                        case 1:
                            for(int f=0; f<15; f++){
                                cout << filas[f] << " | ";
                                for(int c=0; c<20; c++){
                                    cout << sala[f][c] << " | ";
                                }
                                cout << endl;
                                cout << "  ---------------------------------------------------------------------------------" <<endl;
                            }
                         break;
                         case 2:
                            cout << "Ingrese el numero de la fila (A-O): ";
                            cin >> letra;
                            for (int i=0; i<15; i++){
                                if (letra==filas[i]) fila=i;
                            }
                            cout << "Ingrese el numero de la columna: ";
                            cin >> columna;
                            if(sala[fila][columna-1]=='+') cout << "La ubicacion no se encuentra disponible, intente con otro." << endl;
                            sala[fila][columna-1]='+';
                         break;
                        case 3:
                           cout << "Ingrese el numero de la fila (A-O): ";
                           cin >> letra;
                           for (int i=0; i<15; i++){
                               if (letra==filas[i]) fila=i;
                           }
                           cout << "Ingrese el numero de la columna: ";
                           cin >> columna;
                           sala[fila][columna-1]='-';
                        break;
                    }
                }
            }
            break;

            /*Un cuadrado mágico es una matriz de números enteros sin repetir, en la que la suma de los números
            en cada columna, cada fila y cada diagonal principal tienen como resultado la misma constante. Escriba un programa
            que permita al usuario ingresar una matriz cuadrada, imprima la matriz y verifique si la matriz es un cuadrado
            mágico.*/
            case 12:{
                int tam;
                cout << "Ingrese el tamanio del cuadrado que desea realizar: ";
                cin >> tam;
                const int constMagica = (tam * ( tam * tam + 1 )) / 2;
                int cuadrado[tam][tam];
                cout << "\n Rellenar cuadrado (1 al " << tam * tam << "):\n";
                for( int i = 0; i < tam; i++ )
                        for( int j = 0; j < tam; j++ ) {
                            cout << "[" << i << "][" << j << "]: ";
                            cin >> cuadrado[i][j];
                        }
                cout << "\nImprimir cuadrado:\n\n";
                    for( int i = 0; i < tam; i++ ) {
                        cout << " | ";
                        for( int j = 0; j < tam; j++ )
                            cout << cuadrado[i][j] << " ";
                        cout << "| " << endl;
                    }
                    bool esMagico = true;
                        int i = 0;
                        while( i < tam && esMagico == true ) {
                            int suma = 0;
                            for( int j = 0; j < tam; j++ ) {
                                suma += cuadrado[i][j];
                            }
                            if( suma != constMagica ) esMagico = false;
                            i++;
                        }
                        if( !esMagico ) {
                                cout << "\nLos valores no corresponden a un cuadrado magico" << endl;
                            }
                        int j = 0;
                            while( j < tam && esMagico == true ) {
                                int suma = 0;
                                for( int i = 0; i < tam; i++ ) {
                                    suma += cuadrado[i][j];
                                }
                                if( suma != constMagica ) esMagico = false;
                                j++;
                            }

                            if( !esMagico )  cout << "\nLos valores no corresponden a un cuadrado magico" << endl;
                            else cout << "\nLos valores SI corresponden a un cuadrado magico" << endl;
            }
            break;
        }
    }
    }
}
