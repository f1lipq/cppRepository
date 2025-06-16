#include <iostream>
#include <vector>

class SalaKina {
    public:
        std::vector<std::vector<char>> rezerwacje;

    SalaKina(){
        for (int i = 0; i < 10; i++){
            std::vector<char> rzad;
            for (int j = 0; j < 15; j++){
                rzad.push_back('O');
            }
            rezerwacje.push_back(rzad);
        }
    }
    void pokazMiejsca() {
        std::cout << "EKRAN\n";
        for (int i = 0; i < 10; i++){
            std::vector<char> rzad;
            std::cout << i << ".  ";
            for (int j = 0; j < 15; j++){
                std::cout << rezerwacje[i][j] << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n\n";
    }
    void zarezerwujMiejsce(int rzad, int miejsce){
        if (rezerwacje[rzad][miejsce] == 'O' && rzad > 0 && rzad < 15 && miejsce > 0 && miejsce < 10){
            rezerwacje[rzad][miejsce] = 'X';
        } else {
            std::cout << "To miejsce jest już zajęte lub takie miejsce nie istnieje\n";
        }
    }
};

int main(){
    SalaKina s1;
    s1.pokazMiejsca();
    s1.zarezerwujMiejsce(4, 80);
    s1.pokazMiejsca();
    s1.zarezerwujMiejsce(4, 8);
    s1.zarezerwujMiejsce(4, 9);
    s1.zarezerwujMiejsce(7, 2);
    s1.pokazMiejsca();
}