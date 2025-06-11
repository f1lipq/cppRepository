#include <iostream>
using namespace std;

bool czyParzysta(int liczba){
    cout << "Podaj liczbę: ";
    cin >> liczba;

    if(liczba % 2 == 0){
        return true;
    } else {
        return false;
    }
}

int main(){
    int liczba = 0;

    bool ans = czyParzysta(liczba);
    if (ans == true){
        cout << "Parzysta   ";
    } else {
        cout << "Nieparzysta   ";
    }
}