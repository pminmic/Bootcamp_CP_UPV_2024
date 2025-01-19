#include <bits/stdc++.h>
using namespace std;

int main (){
    int test;
    cin >> test;
    int seats;

    for (int i = 0; i < test; i++){
        int m, a, b, c, firstrow, secondrow;
        cin >> m >> a >> b >> c;
        if (a > m){
            firstrow = m;
        }
        else {
            firstrow = a;
        }
        if (b > m){
            secondrow = m;
        }
        else {
            secondrow = b;
        }
        
        if (firstrow < m){
            for (int i = c; i > 0; i--){
                firstrow++;
                c = i - 1;
                if (firstrow == m){
                    break;
                }
            }
        }
        if (secondrow < m){
            for (int i = c; i > 0; i--){
                secondrow++;
                c = i - 1;
                if (secondrow == m){
                    break;
                }
            }
        }

        seats = firstrow + secondrow;
        cout << seats << endl;
    }

    return 0;
}

//          LA GUARRA
// #include <bits/stdc++.h>
//using namespace std;

//int main (){
//    int test;
//    cin >> test;
//    int seats;
//
//    for (int i = 0; i < test; i++){
//        int m, a, b, c, firstrow, secondrow;
//        cin >> m >> a >> b >> c;
//        int sum = a + b + c;
//        if (sum > (m * 2)){
//            seats = m;
//        }
//        else {
//            seats = sum;
//        }
//        cout << seats << endl;
//    }
//
//    return 0;
//}