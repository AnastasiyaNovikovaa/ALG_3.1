#include "Prototip.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello!\n";
	cout << "Laboratory work ¹1\n";
	cout << "Variant ¹4\n";
	int size_array;
	size_t position;
	cout << "Enter the dimension of the table: ";
	cin >> size_array;
	if (size_array > 0)
	{

		cout << "Enter a number to begin populating the table: ";
		cin >> position;

		int **array = new int*[size_array];
		for (size_t i = 0; i < size_array; i++)
		{
			array[i] = new int[size_array];
		}
		full_array(array, size_array, position);
		print_array(array, size_array);
		for (size_t i = 0; i < size_array; i++)
		{
			delete[] array[i];
		}
		delete[] array;
		array = nullptr;
	}
	else
	{
		cout << "Error\n";
	}

	system("pause");

}
