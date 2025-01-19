#include <bits/stdc++.h>
using namespace std;

int main(){
    int numCasos; 
    cin >> numCasos;

    while (numCasos--){
        int numBombon, colorFav, colorBombon;
        bool found = false;
        cin >> numBombon >> colorFav;
         
        for (int i = 0; i < numBombon; i++){
            cin >> colorBombon;
            if (colorFav == colorBombon){
                found = true;
            }
        }

        if (found){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}