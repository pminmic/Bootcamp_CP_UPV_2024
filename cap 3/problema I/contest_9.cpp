#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;

    cin >> a;
    cout << a << " ";

    while (cin >> b){
        long long c = a + b;
        cout << c << " ";
        a = c;
    }
    
    return 0;
}