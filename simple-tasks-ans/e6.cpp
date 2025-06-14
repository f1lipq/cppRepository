#include <iostream>
using namespace std;

const int size = 5;

float getGrades(float grades[size], float sum){
        for (int i = 0; i < 5; i++) {
        cout << "Podaj ocene: ";
        cin >> grades[i];
        sum += grades[i]; 
    }
    return sum;
}

int main() {
    float grades[size];
    float sum = 0;
    sum = getGrades(grades, sum);

    float srednia = sum / 5.0;


    cout << "Srednia ocen: " << srednia << endl;

    return 0;
}
