#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, mx, mn;
    cin >> n >> a;   

    mx = a;
    mn = a;
    int i = 1;
    while(i < n){
        cin >> a;
        mn = min(a, mn);
        mx = max(a, mx);
        ++i;
    }
    
    cout << mn << " " << mx << endl;
}