#include <iostream>
using namespace std;

class Licznik {
public:
    int licznik = 0;

    void zwieksz(int n){
        licznik += n;
    }
    void zmniejsz(int m){
        licznik -= m;
    }
    int pobierzWartosc(){
        return licznik;
    }
};

int main() {
    Licznik l;
    l.zwieksz(3);
    l.zmniejsz(1);
    cout << "Wartość: " << l.pobierzWartosc() << endl;
}
