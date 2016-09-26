#include "stdafx.h"
#include <iostream>

using namespace std;

template<class T>
void Bubblesort(T arr[], int size) {
	
	for (auto i = 0; i < size; i++) {
		for (auto j = i + 1; j < size; j++) {
			if (arr[j] < arr[i]) {
				swap(arr[j], arr[i]);
			}
		}
	}
}

void swap(int &left, int &right) {
	auto tmp = left;
	left = right;
	right = tmp;
}


