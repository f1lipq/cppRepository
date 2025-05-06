#include <iostream>
#include <string>
using namespace std;

void my_print(string text){
    cout << text << endl;
}

void menu(string &text){
    my_print("Podaj tekst");
    getline(cin, text);
}

int main(){
    string text = "Ala";

    my_print("Ala ma kota");
    menu(text);
    my_print("Nowy tekst = " + text);
    return 0;
}