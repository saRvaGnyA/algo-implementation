#include <iostream>
using namespace std;

void opt_bubble_sort(int[], int);

int main() {
    int size{};
    cout << "Enter size of the array: ";
    cin >> size;
    int *a = new int[size];
    cout << "Enter elements of the array: " << endl;
    for(int count{}; count < size; ++count)
        cin >> a[count];
    cout << "The elements of the array are: " << endl;
    for(int count{}; count < size; ++count)
        cout << a[count] << "\t";
    opt_bubble_sort(a, size);
    cout << "The elements of the sorted array are: " << endl;
    for(int count{}; count < size; ++count)
        cout << a[count] << "\t";
    delete [] a;
    return 0;
}

void opt_bubble_sort(int arr[], int n) {
    for(int i{}; i<n; ++i) {
        bool flag {false};
        for(int j{}; j<(n-i-1); ++j) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = true;
            }
        }
        if(!flag)
            break;
    }
}

