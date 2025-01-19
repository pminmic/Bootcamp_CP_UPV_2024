#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    while(getline(cin, s)){
        if (s.length()%2 != 0){
            cout << s << endl;
        }
        else {                                          // inversor de string sense gastar inverse()
            string invertido;
            for (int i = s.length()-1; i >= 0; i--){
                invertido += s[i];
            }
            cout << invertido << endl;
        }
    }
}