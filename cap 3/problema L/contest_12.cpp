#include <bits/stdc++.h>
using namespace std;

int main(){
    int P, V;
    cin >> P >> V;
    int despiertos = 0;

    for (int i = 0; i < P; i++) {                           // bucle per a revisar els desperts per cada piso
        for (int j = 0; j < V; j++) {                       // bucle per a revisar els desperts en cada apartament
            char ventana1, ventana2;                        // com cada apartament té dos finestres, mires si per lo menys una esta amb llum
            cin >> ventana1 >> ventana2;
            
            if (ventana1 == '#' || ventana2 == '#') {
                despiertos++;                               // si hi ha una llum encesa, contem que esta despert
            }
        }
    }

    cout << despiertos;
}