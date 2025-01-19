#include <iostream>
#include <cmath>
#include <queue>
using namespace std;

int main(){
    string tiempo;
    int temperatura;
    cin >> tiempo;
    cin >> temperatura;

    cout << "Vienen a pasear: ";

    if ((tiempo == "Soleado") && (temperatura >= 20)){
        cout << "Adrian ";
    } 
    
    if ((tiempo == "Soleado")||(temperatura > 15)){
        cout << "Barbara ";
    }
    
    if ((tiempo == "Soleado")||(tiempo == "Nublado")){
        cout << "Carmen ";
    }
    
    if (tiempo != "Tormenta"){
        cout << "Dario";
    }

    return 0;
}