#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 5;

void inputMatrix(double matrix[ROWS][COLS]) {
    cout << "Введите элементы массива построчно:\n";
    for (int i = 0; i < ROWS; ++i) {
        cout << "Строка " << i + 1 << ":\n";
        for (int j = 0; j < COLS; ++j) {
            cout << "Элемент " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }
}

double averageOfRow(double row[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += row[i];
    }
    return sum / size;
}

int main() {
    setlocale(LC_ALL, "Rus");
    double matrix[ROWS][COLS];
    inputMatrix(matrix);
    cout << "Средние арифметические для каждой строки:\n";
    for (int i = 0; i < ROWS; ++i) {
        double average = averageOfRow(matrix[i], COLS);
        cout << "Строка " << i + 1 << ": " << average << endl;
    }
    return 0;
}
