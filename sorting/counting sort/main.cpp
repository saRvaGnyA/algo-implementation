#include <iostream>

using namespace std;

void countSort(int *, int, int);

int main() {
    int n;
    int range;
    cin >> n;
    cin >> range;
    int *a = new int[n];
    for (int i{}; i < n; ++i)
        cin >> a[i];
    for (int i{}; i < n; ++i)
        cout << a[i] << "\t";
    cout << endl;
    countSort(a, n, range);
    for (int i{}; i < n; ++i)
        cout << a[i] << "\t";
    delete[] a;
    return 0;
}

void countSort(int *a, int n, int r) {
    int *t = new int[r];
    int *op = new int[n];
    for (int i{}; i < r; ++i)
        t[i] = 0;
    for (int i{}; i < n; ++i)
        t[a[i]]++;
    for (int i{1}; i < r; ++i)
        t[i] += t[i - 1];
    for (int i{}; i < n; ++i)
        op[--t[a[i]]] = a[i];
    for (int i{}; i < n; ++i)
        a[i] = op[i];
    delete[] t;
    delete[] op;
}