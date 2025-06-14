#include <iostream>
using namespace std;

class Punkt2D {
public:

    float x;
    float y;


    Punkt2D(float x_, float y_) {
        x = x_;
        y = y_;
    }

    void wyswietl() {
        cout << "Punkt: " << x << ", " << y << endl;
    }
};

int main() {

    Punkt2D p(3.5, 7.2);
    p.wyswietl();

    return 0;
}
