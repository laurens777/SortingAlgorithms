#include <iostream>

void sort(int a[], int size);
void printArray(int a[], int size);

int main() {
    int test[10] = {50, 9, 25, 1, 4, 8, 4, 31, 10, 51};

    sort(test, 10);
    printArray(test, 10);

    std::cout << std::endl;
    return 0;
}

//input: Array and size of array.
//output: none
void sort(int a[], int size) {
    for(int i = 1; i < size; i++) {
        int tmp = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > tmp) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j+1] = tmp;
    }
}

//input: Array and size of array.
//output: none
void printArray(int a[], int size) {
    int i = 0;

    while(i < size) {
        std::cout << a[i] << " ";
        i++;
    }
}