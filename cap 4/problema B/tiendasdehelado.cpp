#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int h;
    cin >> h;
    vector<int> uno(h);
    vector<int> dos(h);
    vector<int> result(h);
    
    for (int i = 0; i < h; i++){
        int n;
        cin >> n;
        uno[i] = n;
    }
    cin.ignore();
    for (int u = 0; u < h; u++){
        int n;
        cin >> n;
        dos[u] = n;
    }

    for (int z = 0; z < h; z++){
        result[z] = uno[z] + dos[z];
        cout << result[z] << ' ';
    }
    
    return 0;
}