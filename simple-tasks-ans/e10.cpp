#include <iostream>
#include <vector>

class Student{
    public:
        std::string imie;
        int wiek;
        Student(std::string imie_, int wiek_){
            imie = imie_;
            wiek = wiek_;
        }
        void wyswietl() const{
            std::cout << "Imie: " << imie << ", Wiek: " << wiek << std::endl;
        }

};

int main(){
    std::vector<Student> student;

    Student s1("Jan", 19);
    Student s2("Maciej", 21);

    student.push_back(s1);
    student.push_back(s2);

    for (const auto& s : student) {
        s.wyswietl();
    }

    return 0;
}