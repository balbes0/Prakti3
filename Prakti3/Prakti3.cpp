#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    const int ROWS = 3;
    const int COLUMNS = 5;
    double matrica[ROWS][COLUMNS];

    cout << "Введите элементы матрицы " << ROWS << "x" << COLUMNS << endl;
    for (int i = 0; i < ROWS; ++i) {
        cout << "Строка " << (i + 1) << ":\n";
        for (int j = 0; j < COLUMNS; ++j) {
            cin >> matrica[i][j];
        }
    }
    cout << "Средние арифметические для каждой строки:\n";
    for (int i = 0; i < ROWS; ++i) {
        double sum = 0;
        for (int j = 0; j < COLUMNS; ++j) {
            sum += matrica[i][j];
        }
        double average = sum / COLUMNS;
        cout << "Строка " << (i + 1) << ": " << average << endl;
    }
    return 0;
}
