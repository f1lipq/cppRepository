#include <iostream>
#include <string>
using namespace std;

void my_print(string text){
    cout << text << endl;
}


int main(){
    string text = "Ala";

    my_print("Ala ma kota");
    cout << "Podaj tekst" << endl;
    getline(cin, text);
    my_print("Nowy tekst = " + text);
    return 0;
}