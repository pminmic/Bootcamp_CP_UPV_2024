#include <bits/stdc++.h>
using namespace std;

int main(){
    double num1;
    string restin;
    cin >> num1;
    cin.ignore(numeric_limits<streamsize>::max(),'\n'); //numeric_limits<streamsize>::max() especifica que pots ignorar fins a un nombre molt gran de caràcters.
    
    string text1;
    getline(cin, text1);

    string text2;
    cin >> text2;

    cout << text1 << ": " << setprecision(3) << fixed << num1 << endl;
    cout << text2 << endl;

    return 0;

}