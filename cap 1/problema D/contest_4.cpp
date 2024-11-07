#include <bits/stdc++.h>
using namespace std;

int main (){
    string text;
    
    getline(cin, text);

    // Inicialitzar el text1 i text2, amb la mateixa mida que text, perque sinó no funciona transform.
    string text1 = text;
    string text2 = text;

    transform(text.begin(), text.end(), text1.begin(), ::tolower); // transform() funciona així (inici, final, destí, funció)
    transform(text.begin(), text.end(), text2.begin(), ::toupper);

    cout << text1 << endl;
    cout << text2 << endl;

    return 0;
}