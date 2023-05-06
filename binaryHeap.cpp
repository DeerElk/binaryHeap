#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <Windows.h>

using namespace std;

// функция для вывода псевдографики кучи
void printHeap(vector<int>& heap) {
    int n = heap.size();
    int h = log2(n) + 1;
    int w = pow(2, h - 1) * 6;
    for (int i = 0, k = 1; i < h; i++, k *= 2) {
        for (int j = 0; j < k; j++) {
            int idx = k - 1 + j;
            if (idx < n) {
                cout << setw(w / (k + 1)) << heap[idx] << setw(w / (k + 1));
            }
            else {
                cout << setw(w / (k + 1)) << "" << setw(w / (k + 1));
            }
        }
        cout << endl;
        for (int j = 0; j < k; j++) {
            int idx = k - 1 + j;
            if (idx < n) {
                if (2 * idx + 1 < n) {
                    cout << setw(w / (k + 1)) << " /" << setw(w / (k + 1)) << "\\ ";
                }
                else if (2 * idx + 2 < n) {
                    cout << setw(w / (k + 1)) << " /" << setw(w / (k + 1)) << "  ";
                }
                else {
                    cout << setw(w / (k + 1)) << "  " << setw(w / (k + 1)) << "  ";
                }
            }
            else {
                cout << setw(w / (k + 1)) << "" << setw(w / (k + 1));
            }
        }
        cout << endl;
    }
}


// функция для добавления элемента в кучу
void addToHeap(vector<int>& heap, int value)
{
    heap.push_back(value);
    int index = heap.size() - 1;
    while (index > 0 && heap[(index - 1) / 2] < heap[index])
    {
        swap(heap[index], heap[(index - 1) / 2]);
        index = (index - 1) / 2;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<int> heap;

    // запускаем бесконечный цикл для ввода чисел и добавления их в кучу
    while (true)
    {
        int value;
        cout << "Введите число (0 для выхода): ";
        cin >> value;
        if (value == 0)
        {
            break;
        }

        // добавляем число в кучу и выводим ее текущее состояние
        addToHeap(heap, value);
        printHeap(heap);
    }

    return 0;
}
