#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int n;
    int sum = 0;
    std::cin >> n;
    numbers.push_back(n);

    while (n != 0) {
        std::cin >> n;
        numbers.push_back(n);
    }

    for (int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }

    std::cout << "Suma: " << sum;

    return 0;
}