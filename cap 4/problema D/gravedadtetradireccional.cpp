#include <bits/stdc++.h>
using namespace std;

int main(){
    int rows;
    int columns;
    cin >> rows >> columns;

    int matrix[rows][columns];
    int matrixtwo[rows][columns];
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            char n; 
            cin >> n;
            matrix[i][j] = n;
            matrixtwo[i][j] = n;
        }
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (matrix[i][j] == '#'){
                for (int z = 0; z < columns; z++){
                    matrixtwo[i][z] = '#';
                }
                for (int z = 0; z < rows; z++){
                    matrixtwo[z][j] = '#';
                }
                
            }   
        }
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << char(matrixtwo[i][j]);
        }
        cout << '\n';
    }

    return 0;
}