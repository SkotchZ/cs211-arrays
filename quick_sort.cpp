#include <iostream>
#include <assert.h>
#include <cstdlib>
#include <time.h>

using std::rand;
using std::swap;
 
// pivot - "опорный" элемент
// partition - переупорядочивает элементы части массива,
// заданной отрезком [left, right), так что в начале
// следуют элементы меньшие pivot, а в конце - большие;
// возвращает место начала блока элементов, больших pivot;
int * partition(int * left, int *  right, int pivot) {
	int * store = left; // место для вставки элементов, меньших pivot
	for (int * p = left; p != right; ++p)
		if (*p < pivot)
			swap(*p, *store++);
	return store;
}
 
void my_qsort(int * arr, int n) {
	if (n <= 1)
		return; // массив в 1 или 0 элементов уже упорядочен
	int * pivotPtr = arr + rand() % n; // случайный выбор опорного элемента
	int newPivotIdx = partition(arr, arr + n, *pivotPtr) - arr;
	if (*arr == *(arr + n - 1))
		return;
	my_qsort(arr, newPivotIdx);
	
	my_qsort(arr + newPivotIdx, n - newPivotIdx);
}

const int size = 11;

int main(){
	int arr[size];
	for (int j = 1; j < 20; j++){
		srand(time(NULL));
		for (int i = 0; i < size; i++)
			arr[i] = rand() / 100;
		my_qsort(arr, size);
		for (int i = 1; i < size; i++)
			assert(arr[i - 1] <= arr[i]);
	}
	system("pause");
}