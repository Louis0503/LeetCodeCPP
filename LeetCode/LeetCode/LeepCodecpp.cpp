// LeetCode.cpp : 定義主控台應用程式的進入點。
//
#include "stdafx.h"

int main()
{
	int size = 10;
	auto integers = new int[size];
	for (auto i = 0; i < size; i++) {
		integers[i] = 20 - i;
	}
	//Bubblesort(integers, size);
}