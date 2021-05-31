#include <iostream>
using namespace std;

void insertion_sort(int[], int);

int main() {
    int size {};
    cout << "Enter size of the array: ";
    cin >> size;
    int *array {nullptr};
    array = new int[size];
    cout << "Enter the elements of the array: " << endl;
    for(int count{}; count < size; ++count)
        cin >> array[count];
    cout << "The entered array is: " << endl;
    for(int count{}; count<size; ++count)
        cout << array[count] << "\t";
    cout << endl;
    insertion_sort(array, size);
    cout << "The sorted array is: " << endl;
    for(int count {}; count < size; ++count)
        cout << array[count] << "\t";
    cout << endl;
    delete [] array;
    return 0;
}

void insertion_sort(int array[], int size) {
    int key{};
    int j {};
    for(int i{1}; i<size; ++i) {
        key = array[i];
        j = i-1;
        while(j>=0 && key<array[j]) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}
