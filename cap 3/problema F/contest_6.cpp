#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a;

    while(cin >> b)
    {
        if(b == a){
            cout << 'I';
        }   
        else if (b < a){
            cout << 'B';
        }
        else if (b > a){
            cout << 'S';
        }
        a = b;
    }
    return 0;
}