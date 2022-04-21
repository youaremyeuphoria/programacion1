//Nombre:
//TP N°:
//Ejercicio N°:
//Comentarios:

#include <iostream>
using namespace std;
int main () {

    int nc, loc, kv, mkv1, mkv2, mkv3, max1, max2, max3, ncmax1, ncmax2, ncmax3, acu1, acu2, acu3, fijo, con1, con2, con3;
    /* numero cliente, localidad, kv de consumo */
    bool b1, b2, b3; /* banderas de la localidad 1, 2 y 3 */
    fijo = 100; con1 = 0; con2 = 0; con3 = 0;
    b1 = 0; b2 = 0; b3 = 0; mkv1 = 0; mkv2 = 0; mkv3 = 0; max1 = 0; max2 = 0; max3 = 0; ncmax1 = 0; ncmax2 = 0; ncmax3 = 0; acu1 = 0; acu2 = 0; acu3 = 0;

    cout << "ingrese numero de cliente: ";
    cin >> nc;
    cout << "ingrese localidad 1, 2 o 3: ";
    cin >> loc;
    cout << "ingrese kv consumidos: ";
    cin >> kv;

    while (nc != 0){

            if (loc == 1){
                if (b1 == 0){
                    mkv1 = kv;
                    max1 = kv;
                    ncmax1 = nc;
                    b1 = 1;
                }else{
                    if (kv > max1){
                        max1 = kv;
                        ncmax1 = nc;
                    }else{
                        if (kv < mkv1){
                            mkv1 = kv;
                        }}}
            }else{
                if (loc == 2) {
                    if ( b2 == 0){
                        mkv2 = kv;
                        max2 = kv;
                        ncmax2 = nc;
                        b2 = 1;
                    }else{
                        if(kv > max2){
                            max2 = kv;
                            ncmax2 = nc;
                        }else{
                            if (kv < mkv2){
                                mkv2 = kv;
                            }}}
                        }else{
                            if (loc == 3){
                                if (b3 == 0){
                                    mkv3 = kv;
                                    max3 = kv;
                                    ncmax3 = nc;
                                    b3 = 1;
                                }else{
                                    if (kv > max3) {
                                        max3 = kv;
                                        ncmax3 = nc;
                                    }else{
                                        if (kv < mkv3){
                                            mkv3 = kv;
                                        }}}}}}


            if (loc == 1){
                if (kv <= 100){
                    con1 = fijo + (kv*10);
                    acu1 = acu1 + con1;
                }else{
                    if (kv >= 101 && kv <= 200){
                        con1 = fijo + (kv*12);
                        acu1 = acu1 + con1;
                    }else{
                        if (kv >= 201){
                            con1 = fijo + (kv*15);
                            acu1 = acu1 + con1;
                        }}}
            }else{
                if (loc == 2){
                    if (kv <= 100){
                        con2 = fijo + (kv * 10);
                        acu2 = acu2 + con2;
                    }else{
                        if (kv >= 101 && kv <= 200){
                            con2 = fijo + (kv*12);
                            acu2 = acu2 + con2;
                        }else{
                            if (kv >= 201){
                                con2 = fijo + (kv*15);
                                acu2 = acu2 + con2;
                            }}}

                }else{
                    if (loc == 3){
                        if (kv <= 100){
                            con3 = fijo + (kv * 10);
                            acu3 = acu3 + con3;
                        }else{
                            if (kv >= 101 && kv <= 200){
                                con3 = fijo + (kv * 12);
                                acu3 = acu3 + con3;
                            }else{
                                if (kv >= 201){
                                    con3 = fijo + (kv * 15);
                                    acu3 = acu3 + con3;
                                }}}}}}




        cout << "ingrese numero de cliente: ";
        cin >> nc;
        cout << "ingrese localidad 1, 2 o 3: ";
        cin >> loc;
        cout << "ingrese kv consumidos: ";
        cin >> kv;
            }


            cout << "el numero de cliente con mayor consumo por la localidad 1:";
            cout << ncmax1; cout << endl;
            cout << "el consumo fue de: ";
            cout << max1; cout << endl;

            cout << "el numero de cliente con mayor consumo por la localidad 2:";
            cout << ncmax2; cout << endl;
            cout << "el consumo fue de: ";
            cout << max2; cout << endl;

            cout << "el numero de cliente con mayor consumo por la localidad 3:";
            cout << ncmax3; cout << endl;
            cout << "el consumo fue de: ";
            cout << max3; cout << endl;


            cout << "recaudacion total de la localidad 1:";
            cout << acu1; cout << endl;

            cout << "recaudacion total de la localidad 2:";
            cout << acu2; cout << endl;

            cout << "recaudacion total de la localidad 3:";
            cout << acu3; cout << endl;








	return 0;
}
