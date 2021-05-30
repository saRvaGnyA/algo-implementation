#include <iostream>
using namespace std;

void ss(int[],int);

int main() {
    int size{};
    cout << "Enter size of the list: ";
    cin >> size;
    int *arr {nullptr};
    arr = new int[size];
    cout << "Enter the elements of the list: " << endl;
    for(int count{}; count < size; ++count)
        cin >> *(arr+count);
    cout << "The unsorted list is:" << endl;
    for(int count{}; count < size; ++count)
        cout << arr[count] << "\t";
    cout << endl;
    ss(arr,size);
    cout << "The sorted list is: " << endl;
    for(int count{}; count < size; ++count)
        cout << arr[count] << "\t";
    delete [] arr;
    return 0;
}

void ss(int a[], int size) {
    int min{};
    for(int i{}; i<(size-1); ++i) {
        min = i;
        for(int j{i+1}; j<size; j++) {
            if(a[j] < a[min])
                min = j;
        }
        if (min != i) {
            int temp{a[i]};
            a[i] = a[min];
            a[min] = temp;
        }
    }
}
