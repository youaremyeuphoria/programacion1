//Nombre:
//TP N�:
//Ejercicio N�:
//Comentarios:

/* La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana pasada. Por cada movimiento se registr�:
N�mero de movimiento
D�a
Tipo ('E' - Extracci�n / 'D' - Dep�sito)
Importe

Existe un registro por movimiento. Se desea calcular e informar:
El saldo final de la cuenta.
El porcentaje de movimientos de extracci�n y el porcentaje de dep�sito.
El dep�sito de mayor importe indicando tambi�n d�a y n�mero de movimiento.
La cantidad de movimientos del d�a 10.
*/

#include <iostream>
using namespace std;
int main () {

    int x, i, cont, cont2 = 0, cont3 = 0, acu = 0, dia = 0, max = 0, imp = 0, diamax = 0, maxmov = 0, numeromov = 0, pe = 0, pd = 0;
    bool bandera = 0, tipo;

    for (x = 0; x <14; x++){
        cout << "ingrese numero de movimiento: ";
        cin >> numeromov;
        cout << "ingrese dia: ";
        cin >> dia;
        cout << "ingrese tipo: 0 - Extraccion // 1 - Deposito: ";
        cin >> tipo;
        cout << "ingrese importe: ";
        cin >> imp;

        for (i = 0; i <14; i++){

                cont = 0;

            if (bandera == 0 && tipo == 1){
                max = imp;
                diamax = dia;
                maxmov = numeromov;
                acu = acu + imp;
                bandera = 1;
            }else{
                if (imp > max && tipo == 1){
                    max = imp;
                    diamax = dia;
                    maxmov = numeromov;
                    acu = acu + imp;
                }}

            if (tipo == 0){
                cont2++;
            }else{
                cont3++;}


            }

    }

    pe = (cont2 * 100) / 14;
    pd = (cont3 * 100) / 14;





    /*DIA */

    cout << "cantidad de movimientos en el dia 10: ";
    cout << dia; cout << endl;

    /* MAXIMOS */

    cout << "el deposito de mayor importe: ";
    cout << max; cout << endl;

    cout << "realizado el dia: ";
    cout << diamax; cout << endl;

    cout << "el numero de movimiento fue: ";
    cout << maxmov; cout << endl;

    cout << "el saldo final de la cuenta: ";
    cout << acu; cout << endl;

    // porcentajes
    cout << "el porcentaje de las extracciones: ";
    cout << pe; cout << endl;
    cout << "el porcentaje de los depositos: ";
    cout << pd; cout << endl;









	return 0;
}
