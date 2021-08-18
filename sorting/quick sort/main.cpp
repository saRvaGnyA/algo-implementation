#include <iostream>

using namespace std;

void quickSort(int *, int, int);

int partition(int *, int, int);

int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i{}; i < n; ++i)
        cin >> a[i];
    for (int i{}; i < n; ++i)
        cout << a[i] << "\t";
    quickSort(a, 0, n - 1);
    cout << endl;
    for (int i{}; i < n; ++i)
        cout << a[i] << "\t";
    delete[] a;
    return 0;
}

void quickSort(int *a, int s, int e) {
    if (s < e) {
        int p = partition(a, s, e);
        quickSort(a, s, p - 1);
        quickSort(a, p + 1, e);
    }
}

int partition(int *a, int s, int e) {
    int pivot{a[e]};
    int pIndex{s};
    for (int i{s}; i < e; ++i) {
        if (a[i] < pivot) {
            int temp = a[i];
            a[i] = a[pIndex];
            a[pIndex] = temp;
            pIndex++;
        }
    }
    int temp = a[e];
    a[e] = a[pIndex];
    a[pIndex] = temp;
    return pIndex;
}