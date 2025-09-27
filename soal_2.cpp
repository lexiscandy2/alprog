#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int angka;
    cin >> angka;
    //cout << "Tabel Perkalian" << angka << ":" << endl;
    for (int i = 1; i <= 10; i++){
        cout << angka << " x " << i << " = " << angka * i << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
