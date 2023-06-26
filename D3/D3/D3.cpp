#include <iostream>
using namespace std;

class Drob {
    int numerator;
    int denominator;

public:
    void enteringValues() {
        cout << "Введите числитель: ";
        cin >> numerator;
        cout << "Введите знаменатель: ";
        cin >> denominator;
    }

    void print() {
        cout << numerator << "/" << denominator << endl;
    }

    Drob addition(const Drob& other) {
        Drob result;
        result.numerator = (numerator * other.denominator) + (other.numerator * denominator);
        result.denominator = denominator * other.denominator;
        return result;
    }

    Drob subtraction(const Drob& other) {
        Drob result;
        result.numerator = (numerator * other.denominator) - (other.numerator * denominator);
        result.denominator = denominator * other.denominator;
        return result;
    }

    Drob multiplication(const Drob& other) {
        Drob result;
        result.numerator = numerator * other.numerator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Drob division(const Drob& other) {
        Drob result;
        result.numerator = numerator * other.denominator;
        result.denominator = denominator * other.numerator;
        return result;
    }
};

int main() {
    setlocale(LC_ALL, "rus");
    Drob drob1;
    Drob drob2;
    cout << "Введите первую дробь:\n";
    drob1.enteringValues();
    cout << "Введите вторую дробь:\n";
    drob2.enteringValues();
    
    Drob addR = drob1.addition(drob2);
    Drob subR = drob1.subtraction(drob2);
    Drob multR = drob1.multiplication(drob2);
    Drob divR = drob1.division(drob2);


    cout << "Сложение: ";
    addR.print();
    cout << "Вычитание: ";
    subR.print();
    cout << "Умножение: ";
    multR.print();
    cout << "Деление: ";
    divR.print();
}