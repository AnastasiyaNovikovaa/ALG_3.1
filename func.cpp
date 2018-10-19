#include "Prototip.h"
#include <iostream>
#include <iomanip>
using namespace std;

void full_array(int ** const array, const size_t size_array, int pozition)
{
	size_t  i, j;
	
	for (i = 0; i < int(size_array / 2); i++)//проход по 1-ой половине массива и проверка на расположение числа в нем
	{
		for (j = 0; j < size_array; j++)
		{
			if ((i + j < size_array - 1) && (j > i))
			{
				array[j][i] = 0;

			}
			else
			{
				array[j][i] = pozition;
				pozition++;
			}
		}
	}

	for (i = int(size_array / 2); i < size_array; i++)//проход по 2-ой половине массива и проверка на расположение числа в нем
	{
		for (j = 0; j < size_array; j++)
		{
			if ((i + j > size_array - 1) && (j < i))
			{
				array[j][i] = 0;

			}
			else
			{
				array[j][i] = pozition;
				pozition++;
			}
		}
	}


}
void print_array(int **const array, const size_t size_array)
{
	for (size_t i = 0; i < size_array; i++)
	{
		for (size_t j = 0; j < size_array; j++)
		{
			cout << setw(7) << array[i][j];
		}
		cout << "\n";
	}
}

bool is_equal(int ** array1, const size_t size1, int ** array2, const size_t size2)
{
	if (size1 != size2) return false;
	for (size_t i = 0; i < size1; i++)
	{
		for (size_t j = 0; j < size1; j++)
		{
			if (array1[i][j] != array2[i][j])
				return false;
		}
	}
	return true;
}

