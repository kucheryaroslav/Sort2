#include <iostream>

using namespace std;

void printArr(int* arr,int size);
int* initArr(int size);
void bubbleSort(int* arr, int size);
void selectionSort(int* arr, int size);

int main() {
	srand(time(NULL));
	int size = 10;
	int* arr = initArr(size);
	printArr(arr, size);
	//bubbleSort(arr, size);
	selectionSort(arr, size);
	printArr(arr, size);
}

void printArr(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
 }
	cout << endl;
}

int* initArr(int size)
{
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50 + 1;
	}
	return arr;
}

void bubbleSort(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void selectionSort(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++) {
		int tmp = arr[i];
		int index = i;
		for (int j = i; j < size; j++) {
			if (tmp > arr[j]) {
				tmp = arr[j];
				index = j;
			}
		}
		swap(arr[i], arr[index]);
		printArr(arr, size);
	}
}


