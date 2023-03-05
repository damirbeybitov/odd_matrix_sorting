#include <iostream>
#include <vector>
#include <cstdlib> // для функции rand

using namespace std;

int main() {
    int Z[4][6];
    vector<int> Y;

    // Заполняем массив случайными числами
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            Z[i][j] = rand() % 100; // генерируем случайное число от 0 до 99
        }
    }

    // Выводим массив на экран
    cout << "Массив Z:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << Z[i][j] << " ";
        }
        cout << endl;
    }

    // Заполняем вектор нечетными числами из массива
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (Z[i][j] % 2 == 1) {
                Y.push_back(Z[i][j]);
            }
        }
    }

    // Сортируем вектор в порядке убывания
    for (int i = 0; i < Y.size() - 1; i++) {
        for (int j = 0; j < Y.size() - i - 1; j++) {
            if (Y[j] < Y[j + 1]) {
                int temp = Y[j];
                Y[j] = Y[j + 1];
                Y[j + 1] = temp;
            }
        }
    }

    // Выводим вектор на экран
    cout << "Вектор Y:" << endl;
    for (int i = 0; i < Y.size(); i++) {
        cout << Y[i] << " ";
    }
    cout << endl;

    return 0;
}
