#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, p;
    cin >> n >> p;

    int x;

    for(int i = 0; i < p; i++ )
    {
        cin  >> x;

        if (x == n)
        {
            cout << "1p ";
        } 
        else if (abs(x-n) <= 5)
        {
            cout << "0.5p ";
        }
        else if (abs(x-n) <= 10)
        {
            cout << "0.25p ";
        }
        else if (abs(x-n) > 10)
        {
            cout << "0p ";
        }
    }

    return 0;
}