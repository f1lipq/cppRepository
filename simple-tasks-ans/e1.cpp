#include <iostream>
using namespace std;

float bmi(float waga, float wzrost){
    cout << "Podaj swoją wagę: ";
    cin >> waga;
    cout << "Podaj swój wzrost: ";
    cin >> wzrost;
    float bmi = 0.00;

    cout << "Waga: " << waga << "   Wzrost: " << wzrost << endl;
    bmi = waga / (wzrost * wzrost);

    return bmi;
}

int main(){
    float waga = 0.00;
    float wzrost = 0.00;
    float bmi = bmi(waga, wzrost);

    cout << "BMI: " << bmi;
}