/*Дано целое число N (> 0).
Сформировать и вывести целочисленный массив размера N,
содержащий N первых положительных нечетных чисел: 1, 3, 5, . . . .*/

#include <iostream>
using namespace std;
const int INITIAL_NUMBER = 1;
const int STEP = 2;

int main()
{
    setlocale(LC_ALL, "ru");
    int N;
    cout << "Введите целое число N (> 0): ";
    cin >> N;
    if (N <= 0) {
        cerr << "Ошибка: введено некорректное значение N." << endl;
        return 1;
    }

    // Создание и заполнение массива
    int* NumbersArray = new int[N];
    int currentOddNumber = INITIAL_NUMBER;
    for (int i = 0; i < N; ++i) {
        NumbersArray[i] = currentOddNumber;
        currentOddNumber += STEP;
    }

    // Вывод массива
    cout << "Массив нечетных чисел: ";
    for (int i = 0; i < N; ++i) {
        cout << NumbersArray[i] << " ";
    }
    cout << endl;
    delete[] NumbersArray;
    return 0;
}