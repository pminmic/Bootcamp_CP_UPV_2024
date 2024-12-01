#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    string palabras;
    cin >> casos;
    cin.ignore();
    
    int vocales = 0;
    int letras = 0;

    for (int i = 0; i < casos; i++){
        
        getline(cin, palabras);
               
        for (char letra : palabras){
            if (letra == 'a'){
                vocales++;
            }
            else if (letra == 'e'){
                vocales++;
            }
            else if (letra == 'i'){
                vocales++;
            }
            else if (letra == 'o'){
                vocales++;
            }
            else if (letra == 'u'){
                vocales++;
            }
            
            if (letra != ' '){
                letras++;
            }
            
        }
        cout << vocales << ' ' << letras << endl;        
        vocales = 0;
        letras = 0;
    }

    return 0;  
}