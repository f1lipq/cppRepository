#include <iostream>
#include <vector>
#include <iomanip>

class BankAccounts{
    public:
        std::vector<std::string> history;
        std::string number;
        std::string name;
        float balance;
        BankAccounts(std::string number_, std::string name_, float balance_){
            number = number_;
            name = name_;
            balance = balance_;
        }
        void showInfo(){
            std::cout << "Numer: " << number << ", Imię: " << name << ", Saldo: " << balance << std::endl;
        }
        void payment(float amount){
            balance += amount;
            std::string stringAmount = std::to_string(amount);
            history.push_back("+" + stringAmount);
        }
        void paycheck(float amount){
            balance -= amount;
            std::string stringAmount = std::to_string(amount);
            history.push_back("-" + stringAmount);
        }
        void showHistory(){
            for (int i = 0; i < history.size(); i++){
                std::cout << history[i] << std::endl;
            }
        }
};

int main(){
    BankAccounts a1("123456789", "Jan Kowalski", 3000.00);
    a1.showInfo();
    a1.payment(20.00);
    a1.showInfo();
    a1.paycheck(100.00);
    a1.showInfo();
    a1.showHistory();
}