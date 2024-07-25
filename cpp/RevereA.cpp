#include <iostream>
using namespace std;

void Reverse(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) { // Change from <= to < to avoid unnecessary swap when start equals end
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(const int arr[], int size) { // Use const to indicate the array is not modified
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Print an end-of-line character after printing the array
}

int main() {
    int arr[6] = {5, 7, 9, 4, 0, 1};

    Reverse(arr, 6);
    printArr(arr, 6);

    return 0;
}
