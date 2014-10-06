#include <iostream>
#include "arrays.h"
#include <cassert>

using namespace std;

int const size = 5;

int main(){
	task_1();
	task_2();
	task_3_zero();
	task_4();
	int arr1[size] = { 1, 2, 0, -4, 50 };
	int arr2[size];
	task_5_copy(arr1, arr2, size);
	for (int i = 0; i < size; i++)
		assert(arr1[i] == arr2[i]);
	int arr3[size] = { 2, 1, 44, -14, -50 };
	int arr4[size];
	task_6_poor_copy(arr3, arr4,size);
	for (int i = 0; i < size; i++)
		assert(arr3[i] == arr4[i]);
	task_7_print(arr3, size);
}