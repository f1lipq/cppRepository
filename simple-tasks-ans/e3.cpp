#include <iostream>
using namespace std;

int silnia1(int n){
    int num = 1;
    for (int i = 1; i <= n; i++){
        num *= i;
    }
    return num;
}


int main(){
    int n = 0;
    cout << "Podaj n: ";
    cin >> n;

    int silnia2 = silnia1(n);
    cout << "Silnia z liczby " << n << ": " << silnia2 << endl;
}