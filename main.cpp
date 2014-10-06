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
}