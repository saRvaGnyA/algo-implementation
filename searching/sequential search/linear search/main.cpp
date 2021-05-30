#include <iostream>
using namespace std;

int linear_search(int, int, const int[]);

int main() {
    int size{};
    cout << "Input size of the array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the elements of the array: " << endl;
    for(int count{}; count<size; ++count)
        cin >> arr[count];
    cout << "The entered array is: " << endl;
    for(int i{}; i<size; ++i)
        cout << arr[i] << "\t";
    cout << endl;
    int search_element{};
    cout << "Enter the element to be searched: ";
    cin >> search_element;
    int posn{};
    posn = linear_search(size, search_element, arr);
    if(posn==-1)
        cout << "Element not found in the array" << endl;
    else
        cout << "Element found at position: " << posn << endl;
    delete [] arr;
    return 0;
}

int linear_search(int size, int search, const int array[]) {
    int pos {-1};
    for(int count{}; count<size; ++count) {
        if(array[count] == search) {
            pos = count+1;
            break;
        }
    }
    return pos;
}


