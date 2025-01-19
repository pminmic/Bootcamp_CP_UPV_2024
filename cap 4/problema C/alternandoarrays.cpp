#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int length;
    cin >> length;
    int uno[length];
    int dos[length];
    
    for (int i = 0; i < length; i++){
        int n;
        cin >> n;
        uno[i] = n;
    }
    cin.ignore();
    for (int u = 0; u < length; u++){
        int n;
        cin >> n;
        dos[u] = n;
    }

    for (int z = 0; z < length; z++){
        if ((z % 2) != 0){
            int aux = 0;
            aux = uno[z];
            uno[z] = dos[z];
            dos[z] = aux;
        }
    }
    
    for (int y = 0; y < length; y++){
        if (y == (length - 1)){
            cout << uno[length - 1] << endl;
        }
        else {
            cout << uno[y] << ' ';
        }
    }
    
    for (int y = 0; y < length; y++){
        if (y == (length - 1)){
            cout << dos[length - 1] << endl;
        }
        else {
            cout << dos[y] << ' ';
        }
    }
}