//Nombre:
//TP N°:
//Ejercicio N°:
//Comentarios:

#include <iostream>
using namespace std;
int main () {

    /* sss 1 2 3 4 (es saldo superior por sucursal 1, 2 3 & 4)*/

    int nc, ns, sc, max, max2, sucursal_1, sucursal_2, cliente_1, cliente_2, pisovip, sss1, sss2, sss3, sss4, acu1, acu2, acu3, acu4, s1, s2, s3, s4, sucursalvip;

    bool b, b1;
    b1 = 0; b = 0; max = 0; max2 = 0; sucursal_1 = 0; sucursal_2 = 0; cliente_1 = 0; cliente_2 = 0; pisovip = 20000; sucursalvip = 0;
    sss1 = 0; sss2 = 0; sss3 = 0; sss4 = 0; acu1 = 0; acu2 = 0; acu3 = 0; acu4 = 0; s1 = 1; s2 = 2; s3 = 3; s4 = 4;

    cout << "ingrese numero de cliente: ";
    cin >> nc;
    cout << "ingrese numero de sucursal: ";
    cin >> ns;
    cout << "ingrese el saldo del cliente: ";
    cin >> sc;

    while (ns != 10){

        if (b == 0){
            max = sc;
            sucursal_1 = ns;
            cliente_1 = nc;
            b = 1;

        }else{
            if (sc > max){
                max = sc;
                sucursal_1 = ns;
                cliente_1 = nc;
            }else{
                if (sc > max2){
                    max2 = sc;
                    sucursal_2 = ns;
                    cliente_2 = nc;
                }}}

        if (ns == 1){
            if (sc > pisovip){
                sss1++;
                acu1 = acu1 + sc;
            }else{
                acu1 = acu1 + sc; }
        }else{
            if (ns == 2) {
                if (sc > pisovip){
                    sss2++;
                    acu2 = acu2 + sc;
                }else{
                    acu2 = acu2 + sc;
                    }
            }else{
                if (ns == 3){
                    if (sc > pisovip){
                        sss3++;
                        acu3 = acu3 + sc;
                    }else{
                        acu3 = acu3 + sc;
                        }
                }else{
                    if (ns == 4){
                        if (sc > pisovip){
                            sss4++;
                            acu4 = acu4 + sc;
                        }else{
                            acu4 = acu4 + sc; }
                    }}}}

        if (sss1 > sss2 && sss1 > sss3 && sss1 > sss4){
            sucursalvip = s1;
        }else{
            if (sss2 > sss3 && sss2 > sss4){
                sucursalvip = s2;
            }else{
                if (sss3 > sss4){
                    sucursalvip = s3;
                }else{
                    sucursalvip = s4;}}}











        cout << "ingrese numero de cliente: ";
        cin >> nc;
        cout << "ingrese numero de sucursal: ";
        cin >> ns;
        cout << "ingrese el saldo del cliente: ";
        cin >> sc;


    }


    cout << "numero de cliente con mayor saldo: ";
    cout << cliente_1; cout<< endl;
    cout << "numero de sucursal con mayor saldo: ";
    cout << sucursal_1; cout<< endl;

    cout<< endl;

    cout << "numero de cliente con segundo mayor saldo: ";
    cout << cliente_2; cout<< endl;
    cout << "numero de sucursal con segundo mayor saldo: ";
    cout << sucursal_2; cout<< endl;

    cout<< endl;

    cout << "la suma total de la sucursal 1: ";
    cout << acu1; cout<< endl;
    cout << "la suma total de la sucursal 2: ";
    cout << acu2; cout<< endl;
    cout << "la suma total de la sucursal 3: ";
    cout << acu3; cout<< endl;
    cout << "la suma total de la sucursal 4: ";
    cout << acu4; cout<< endl;

    cout<< endl;


    cout << "la sucursal con mayor porcentaje de clientes con saldo superior a 20000: ";
    cout << sucursalvip; cout<< endl;







	return 0;
}
