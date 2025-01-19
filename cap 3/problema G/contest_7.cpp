#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string fizzbuzz = "FizzBuzz";
    string fizz = "Fizz";
    string buzz = "Buzz";
    int i = 1;
    while (i <= n){
        if ((i%3 == 0) && (i%5 == 0)){
            cout << fizzbuzz << '\n';
        }
        else if ((i%3 == 0) && !(i%5 == 0)){
            cout << fizz << '\n';
        }
        else if (!(i%3 == 0) && (i%5 == 0)){
            cout << buzz << '\n';
        }
        else {
            cout << i << '\n';
        }
        ++i;
    }
    return 0;
}