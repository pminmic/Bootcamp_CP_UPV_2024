#include <bits/stdc++.h>
using namespace std;

int main(){
    int lado;
    cin >> lado;
    int numast = 0;
    int num = 0;

    int tostada[lado][lado];
    int tostadatwo[lado][lado];

    for (int i = 0; i < lado; i++){
        for (int j = 0; j < lado; j++){
            char n;
            cin >> n;
            tostada[i][j] = n;
        }
    }

    for (int i = 0; i < lado; i++){
        for (int j = 0; j < lado; j++){
            char n;
            cin >> n;
            tostadatwo[i][j] = n;
        }
    }

    for (int i = 0; i < lado; i++){
        for (int j = 0; j < lado; j++){
            if (tostada[i][j] == '.'){
                numast++;
            }
            if (tostada[i][j] == tostadatwo[i][j]){
                num++;
            }

        }
    }

    if (num == lado*lado && numast == lado*lado){
        cout << "NO LLEVABA MERMELADA";
    }
    else if (num == lado*lado){
        cout << "HA HABIDO SUERTE";
    }
    else {
        cout << "TRAGEDIA";
    }

}