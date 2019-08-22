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

void sort(int a[], int size) {
    for(int i = 0; i < size-1; i++) {
        int min = i;
        for(int j = i+1; j < size; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }

        if(min != i) {
            int temp = a[i];
                a[i] = a[min];
                a[min] = temp;
        }
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
