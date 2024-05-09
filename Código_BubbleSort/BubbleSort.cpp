#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // Indica se houve troca nesta passagem
        for (int j = 0; j < n - i - 1; j++) { // Ajuste aqui para n - i - 1
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true; // Indica que houve troca
            }
        }
        if (!swapped) // Se não houve troca nesta passagem, o array está ordenado
            break;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    srand(time(0)); 
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100; 
    }

    cout << "Array original:" << endl;
    printArray(arr, SIZE);

    bubbleSort(arr, SIZE);

    cout << "Array ordenado:" << endl;
    printArray(arr, SIZE);

    return 0;
}
