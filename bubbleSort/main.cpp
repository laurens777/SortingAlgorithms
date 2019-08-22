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
    bool swapped;
    for (int i = 0; i < size-1; i++) {
        swapped = false;
        for(int j = 0; j < size-i-1; j++) {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped = true;
            }
        }

        //if no two elements are swapped, then break since array is sorted.
        if(swapped == false) {
            break;
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