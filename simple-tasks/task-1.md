# 💻 Zaawansowane zadania z C++

Poniżej znajdują się 3 zaawansowane zadania z języka C++. Każde z nich wykorzystuje różne aspekty języka: zmienne, funkcje, klasy, tablice oraz `std::vector`.

---

## 🧠 Zadanie 1: Analiza statystyczna danych pomiarowych

### Opis:
Napisz program, który wczytuje dane pomiarowe (np. temperatury) z pliku lub z klawiatury i przechowuje je w `std::vector<float>`. Następnie policz:
- średnią,
- odchylenie standardowe,
- medianę.

### Wymagania:
- Utwórz klasę `Statystyka`, która zawiera metody do obliczeń statystycznych.
- Dane mają być przechowywane jako prywatny `std::vector<float>`.
- Zaimplementuj co najmniej jedną funkcję prywatną pomocniczą.

### Rozszerzenie:
Dodaj możliwość filtrowania danych – np. odrzucenia skrajnych wartości (tzw. outliers).

---

## 🧠 Zadanie 2: Symulacja kont bankowych

### Opis:
Stwórz system do zarządzania kontami bankowymi. Każde konto ma numer, imię właściciela, saldo i historię transakcji.

### Wymagania:
- Klasa `KontoBankowe` z metodami:
  - `wplata(float kwota)`
  - `wyplata(float kwota)`
  - `pokazHistorie()`
- Historia przechowywana jako `std::vector<std::string>`.
- Użyj zmiennej statycznej do zliczania liczby założonych kont.

### Rozszerzenie:
Dodaj klasę `Bank`, która zarządza wieloma kontami (np. tablica lub `vector<KontoBankowe>`) i umożliwia przelewy między kontami.

---

## 🧠 Zadanie 3: System rezerwacji miejsc w kinie

### Opis:
Napisz program do rezerwacji miejsc w kinie o układzie 10 rzędów × 15 miejsc. Miejsca są oznaczone jako dostępne (`O`) lub zajęte (`X`).

### Wymagania:
- Klasa `SalaKina` z metodami:
  - `zarezerwujMiejsce(int rzad, int miejsce)`
  - `pokazMiejsca()`
- Zastosuj `std::vector<std::vector<char>>` do przechowywania miejsc.
- Zaimplementuj walidację wprowadzanych danych (np. zakresy indeksów).

### Rozszerzenie:
Dodaj system cenowy – np. miejsca w środkowym rzędzie są droższe – oraz funkcję podsumowania całkowitej sprzedaży.

---