#include <iostream>
using namespace std;

int findMax(int liczby[], int max){
        for (int i = 0; i < 5; i++){
        if (liczby[i] > max){
            max = liczby[i];
        }
    }
    return max;
}

int main() {
    int liczby[] = {4, 2, 9, 1, 7};
    int max = liczby[0];
    max = findMax(liczby, max);
    cout << "Największa liczba: " << max;
    return 0;
}