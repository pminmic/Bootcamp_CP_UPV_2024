#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    cin.ignore();
    string text;

    for (int i = 0; i < casos; i++){
        int sum = 1;
        getline(cin, text);
        string new_text = "";

        for (char letra : text){
            if (letra == ' '){
                sum += 2;
                new_text += "**";
            }
            else {
                sum += 4;
                //string letras = letra;
                new_text += "* ";
                new_text.push_back(letra);
                new_text += " ";
            }
        }
        string cadena = "";
        for (int i = 0; i < sum; i++){
            cadena += '*';
        }
        
        cout << cadena << endl;
        cout << new_text << "*"<< endl;
        cout << cadena << endl;
    }
}   