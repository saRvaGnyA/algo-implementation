#include <iostream>

using namespace std;

void merge(int *, int, int, int);

void mergeSort(int *, int, int);

int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i{}; i < n; ++i)
        cin >> a[i];
    for (int i{}; i < n; ++i)
        cout << a[i] << "\t";
    cout << endl;
    mergeSort(a, 0, n - 1);
    for (int i{}; i < n; ++i)
        cout << a[i] << "\t";
    delete[] a;
    return 0;
}

void mergeSort(int *a, int l, int r) {
    if (l < r) {
        int mid{l + (r - l) / 2};
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

void merge(int *a, int l, int m, int r) {
    int i_left{l}, i_right{m + 1}, i_temp{l};
    int *temp = new int[r + 1];
    while (i_left <= m && i_right <= r) {
        if (a[i_left] <= a[i_right]) {
            temp[i_temp] = a[i_left];
            i_left++;
            i_temp++;
        } else {
            temp[i_temp] = a[i_right];
            i_right++;
            i_temp++;
        }
    }
    while (i_left <= m) {
        temp[i_temp] = a[i_left];
        i_left++;
        i_temp++;
    }
    while (i_right <= r) {
        temp[i_temp] = a[i_right];
        i_right++;
        i_temp++;
    }
    for (int i{l}; i < r + 1; ++i)
        a[i] = temp[i];
    delete[] temp;
}
