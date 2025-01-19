#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        string n; 
        cin >> n;
        string newword = "";
        for (int i = n.length(); i > 0; i--){
            char l = n[i-1];
            if (l == 'p'){
                newword += 'q';
            }
            else if (l == 'q'){
                newword += 'p';
            }
            else {
                newword += l;
            }
        }
        
        cout << newword << endl;
    }
    
    return 0;
}
