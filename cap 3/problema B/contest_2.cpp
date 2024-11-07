#include <iostream>
#include <cmath>
#include <queue>
#include <iomanip>
using namespace std;

int main (){
    float x;
    float y;
    string op;
    cin >> x >> op >> y;


    if ((op == "/") && (y == 0)){
        cout << "ERROR" << endl;
        
    } else if ((op == "/") && (x == 0) && (y != 0)) {
        cout << "0.00" << endl;

    } else if ((op == "/") && (x != 0) && (y != 0)){
        double redondejat = (round((x/y)*100))/100;
        cout << fixed << setprecision(2) << redondejat << endl;
    }   
        
    if (op == "+"){
        cout << x+y << endl;    
    }

    if (op == "-"){
        cout << x-y << endl;   
    }
        
    if (op == "*"){
        long long x1 = (long long) x;
        long long y1 = (long long) y;
        long long mult = x1*y1;
        cout << std::fixed << std::setprecision(0) << mult << endl;    //La multiplicació està truncant a les unitats (-9439 * 9317) no funciona bé
    }

    return 0;
}