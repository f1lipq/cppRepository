#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cmath>

class Stats{
    private:
        std::vector<float> readData(){
            std::vector<float> data;
            std::string value;
            std::ifstream dataFile("dane.txt");

             while (getline (dataFile, value)) {
                float number = std::stof(value);
                data.push_back(number);
            }
            dataFile.close();
            return data;
        }
    public:

        void display(){
            std::vector<float> data = readData();
            for (int i = 0; i < data.size(); i++){
                std::cout << data[i] << "\n";
            }
        }

        float avg(){
            std::vector<float> data = readData();
            float sum = 0;
            for (int i = 0; i < data.size(); i++){
                sum += data[i];
            }
            return sum / data.size();
        }

        float median(){
            std::vector<float> data = readData();
            sort(data.begin(), data.end());

            if (data.size() % 2 == 0){ 
                int index1 = data.size() / 2;
                int index2 = index1 - 1;
                float sum = data[index1] + data[index2];
                return sum / 2;
            } else{
                //nieparzysta
                int index = data.size() / 2;
                return data[index];
            }
        }

        float stdev(){
            std::vector<float> data = readData();
            float sum = 0;
            float average = avg();

            for (int i = 0; i < data.size(); i++){
                sum += pow(data[i] - average, 2.0);
            }
            return sqrt(sum / data.size());
        }

};

int main(){
    Stats s;
    s.median();
    std::cout << "Dane wejściowe: \n";
    s.display();
    std::cout << "Średnia: " << s.avg() << "\n";
    std::cout << "Mediana: " << s.median() << "\n";
    std::cout << "Odchylenie standardowe: " << s.stdev() << "\n";

}