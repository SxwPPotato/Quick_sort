#include <iostream>

void quick_sort(int* arr, int size) {
	int left = 0;
	int right = size - 1;

	int pivot = arr[size / 2];
	do {

		while (arr[left] < pivot) {
			left++;
		}
		while (arr[right] > pivot) {
			right--;
		}
		if (left <= right) {
			std::swap(arr[left], arr[right]);
			left++;
			right--;
		}
	} while (left <= right);

	if (right > 0) {
		quick_sort(arr, right + 1);
	}
	if (left < size) {
		quick_sort(&arr[left], size - left);
	}
}


void Show_arr(int* arr, int size) {
	std::cout << "масив до сортировки: ";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\nмасив после сортировки: ";
	quick_sort(arr, size);
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}

}


int main()
{
	setlocale(LC_ALL, "russian");
	int size = 10;
	int size2 = 15;
	int size3 = 18;
	int* arr = new int[size] {3, 43, 38, 29, 18, 72, 57, 61, 2, 33};
	int* arr2 = new int[size2] {88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74};
	int* arr3 = new int[size3] {24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62};
	
	Show_arr(arr, size);
	std::cout << "\n" << "\n";
	Show_arr(arr2, size2);
	std::cout << "\n" << "\n";
	Show_arr(arr3, size3);
	std::cout << "\n";



	return 0;
}
