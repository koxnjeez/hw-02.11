#include "settings.h"

void SetSize(int* size, int min_end, int max_end) {
    cout << "Enter size of array: ";
    cin >> *size;
    if (*size < min_end || *size > max_end) {
        cout << "Incorrect array size!\n";
        Sleep(INFINITE);
    }
}

void AllocateMemory(int** arr, int size) {
    *arr = new int[size];
}

void FillArray(int* arr, int size, int min_num, int max_num) {
    for (int i = 0; i < size; i++) {
        arr[i] = min_num + rand() % max_num + 1 - min_num;
    }
}

void ShowArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void FreeMemory(int* arr) {
    delete[] arr;
}

int main()
{
    int size;
    SetSize(&size, 10, 100000);
    
    int* array = new int[0];
    AllocateMemory(&array, size);

    FillArray(array, size, 0, 10);

    ShowArray(array, size);

    FreeMemory(array);

    Sleep(INFINITE);
}