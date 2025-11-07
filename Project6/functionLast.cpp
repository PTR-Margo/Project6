#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
void inputArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter element --> "<< i;
        cin >> arr[i];
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

template <typename T>
int findFirst(T arr[], int size, T key) {
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

template <typename T>
int findLast(T arr[], int size, T key) {
    for (int i = size - 1; i >= 0; i--)
        if (arr[i] == key)
            return i;
    return -1;
}

template <typename T>
void shuffleArray(T arr[], int size) {
    for (int i = 0; i < size * 2; i++) {
        int a = rand() % size;
        int b = rand() % size;
        T temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
}

template <typename T>
void fillArray(T arr[], int size, T value) {
    for (int i = 0; i < size; i++)
        arr[i] = value;
}

template <typename T>
void sortAscending(T arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[i] > arr[j]) {
                T tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}

template <typename T>
void sortDescending(T arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[i] < arr[j]) {
                T tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}

int findFirst(char arr[], int size, char key) {
    if (key >= 'A' && key <= 'Z') key += 32;
    for (int i = 0; i < size; i++) {
        char c = arr[i];
        if (c >= 'A' && c <= 'Z') c += 32;
        if (c == key) return i;
    }
    return -1;
}

int main() {
    srand(time(0));
    const int SIZE = 5;

    int intArr[SIZE] = { 3, 1, 4, 1, 5 };
    cout << "    int array    " << endl;
    printArray(intArr, SIZE);
    cout << "First 1 at: " << findFirst(intArr, SIZE, 1) << endl;
    shuffleArray(intArr, SIZE);
    cout << "After shuffle: ";
    printArray(intArr, SIZE);
    sortAscending(intArr, SIZE);
    cout << "Sorted ascending: ";
    printArray(intArr, SIZE);
    sortDescending(intArr, SIZE);
    cout << "Sorted descending: ";
    printArray(intArr, SIZE);

    double dblArr[SIZE] = { 2.5, 1.1, 3.3, 0.9, 2.2 };
    cout << "   double array  " << endl;
    printArray(dblArr, SIZE);
    sortAscending(dblArr, SIZE);
    printArray(dblArr, SIZE);

    char charArr[SIZE] = { 'A', 'b', 'C', 'a', 'B' };
    cout << "  char array   " << endl;
    printArray(charArr, SIZE);
    cout << "First 'a' (ignore case): " << findFirst(charArr, SIZE, 'a') << endl;

}
