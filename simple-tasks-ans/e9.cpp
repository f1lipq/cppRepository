#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    int number;
    std::cout << "Podaj liczbę elementów: ";
    std::cin >> n;

    std::vector<int> numbers;

    for (int i = 0; i < n; i++){
        std::cout << "Podaj liczbe: ";
        std::cin >> number;
        numbers.push_back(number);
    }

    std::reverse(numbers.begin(), numbers.end());
    std::cout << "Odwrócona kolejność: ";
    for (int i = 0; i < n; i++){
        std::cout << numbers[i] << ", ";
    }
}