#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string num;
    cin >> num;
    int i = 0;
    int l = num.length();
    int n;

    while(i<l)
    {
        int s = num[i] -48;
        n += s;
        ++i;
    }

    cout << n;
    return 0;
}