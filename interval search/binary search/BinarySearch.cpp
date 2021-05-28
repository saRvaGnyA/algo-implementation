
#include <iostream>
using namespace std;

void binary_search(int, int, const int[]);
int main()
{
	int size{};
	cout << "Enter size of the sorted list: ";
	cin >> size;
	int* array;
	array = new int[size];
	cout << "Enter the elements of the sorted list: " << endl;
	for (int count{}; count < size; ++count)
		cin >> array[count];
	cout << "Entered sorted list is:" << endl;
	for (int i{}; i < size; i++)
		cout << array[i] << "\t";
	cout << endl;
	int search_element{};
	cout << "Enter the element to be searched: ";
	cin >> search_element;
	binary_search(size, search_element, array);
	delete[] array;
	return 0;
}

void binary_search(int size, int search, const int arr[]) {
	int posn{-1};
	int l{}; //leftmost
	int r{ size - 1 }; //rightmost
	while (l <= r) {
		int m{ l + ((r - l) / 2) }; //mid
		if (arr[m] == search) {
			posn = m+1;
			break;
		}
		else if (arr[m] > search) {
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}
	if (posn == -1)
		cout << "Element not found in the list " << endl;
	else
		cout << "Element found at the position: " << posn << endl;

	//return;
}
