#include <iostream>
#include <cmath>
#include <queue>
#include <iomanip>
using namespace std;

int main (){
    double n, f, x, y;
    cin >> n;
    vector<double> resultats;

    for (int t = 0; t < n ; ++t){
        cin >> f;
        double pi = 3.141592;
        double resultat = 0;

        if (f == 1)
        {
            cin >> x;
            double circulo = pi*(pow(x,2)); 
            resultats.push_back(circulo);   // envies el resultat al vector            
        } 
        else if (f == 2)
        {
            cin >> x;
            resultats.push_back(pow(x, 2)); // envies el resultat al vector
        } 
        else if (f ==3)
        {
            cin >> x >> y;
            resultats.push_back(x*y);      // envies el resultat al vector
        }
        else if (f >= 4)
        {
            cin >> x >> y;
            resultats.push_back((x*y)/2);  // envies el resultat al vector
        }
    }

    for (double res : resultats) {
        cout << fixed << setprecision(5) << res << endl;
    }


    return 0;
}