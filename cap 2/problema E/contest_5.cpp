#include <bits/stdc++.h>
using namespace std;

int main(){
    long a, b, c;

    cin >> a >> b >> c;

    long x = a & b;
    long y = x | c;
    long z = y ^ b;

    cout << x << " " << y << " " << z << endl;

    return 0;
}
