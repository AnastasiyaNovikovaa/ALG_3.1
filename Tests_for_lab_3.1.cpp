#include "stdafx.h"
#include "CppUnitTest.h"
#include "../3.2_hueta/Prototip.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(testClass1)
	{
	public:

		TEST_METHOD(Equal_array_5_elem)
		{
			int **array1 = new int*[5];
			int **array2 = new int*[5];

			for (size_t i = 0; i < 5; i++)
			{
				array1[i] = new int[5];
				array2[i] = new int[5];
			}
			int p = 0;
			for (size_t i = 0; i < 5; i++)
			{
				for (size_t j = 0; j < 5; j++)
				{
					array1[i][j] = p;
					array2[i][j] = p;
					p++;
				}
			}

			Assert::IsTrue(is_equal(array1, 5, array2, 5));
			for (int i = 0; i <5; i++)
			{
				delete[] array1[i];
				delete[] array2[i];
			}
			delete[] array1;
			array1 = nullptr;
			delete[] array2;
			array2 = nullptr;

		}
         
        TEST_METHOD(Equal_array_5_elems)
		{
			int ** array1 = new int*[5];
			int ** array2 = new int*[5];
			for (size_t i = 0; i < 5; i++)
			{
				array1[i] = new int[5]; 
				array2[i] = new int[5];
			}

			array1[0] = new int[5]{ 1,3,7,12,16 };
			array1[1] = new int[5]{ 0,4,8,13,0 };
			array1[2] = new int[5]{ 0,0,9,0,0 };
			array1[3] = new int[5]{ 0,5,10,14,0 },
		   array1[4] = new int[5]{ 2,6,11,15,17 };

			size_t j;
			size_t size = 5;
			size_t position = 1;
			full_array(array2, size, position);
			Assert::IsTrue(is_equal(array1, 5, array2, 5));
			for (size_t i = 0; i < 5; i++)
			{
				delete[] array1[i];
				delete[] array2[i];
			}
			delete[] array1;
			array1 = nullptr;
			delete[] array2;
			array2 = nullptr;
		}
		TEST_METHOD(Equal_arrays_4_elem)
		{

			int ** array1 = new int*[4];
			int ** array2 = new int*[4];
			for (size_t i = 0; i < 4; i++)
			{
				array2[i] = new int[4];
			}

			array1[0] = new int[4]{ 1,3,7,11 };
			array1[1] = new int[4]{ 0,4,8,0 };
			array1[2] = new int[4]{ 0,5,9,0 };
			array1[3] = new int[4]{ 2,6,10,12 };

			int size = 4;
			int position = 1;
			full_array(array2, size, position);

			Assert::IsTrue(is_equal(array1, 4, array2, 4));
			for (size_t i = 0; i < 4; i++)
			{
				delete[] array1[i];
				delete[] array2[i];
			}
			delete[] array1;
			array1 = nullptr;
			delete[] array2;
			array2 = nullptr;
		}
		TEST_METHOD(Equal_arrays_2_elem)
		{

			int ** array1 = new int*[2];
			int ** array2 = new int*[2];
			for (int i = 0; i < 2; i++)
			{
				array2[i] = new int[2];
			}

			array1[0] = new int[4]{ 1,2};
			array1[1] = new int[4]{ 3,4};
			int size = 2;
			int position = 1;
			full_array(array2, size, position);

			Assert::IsFalse(is_equal(array1, 2, array2, 2));
			for (size_t i = 0; i < 2; i++)
			{
				delete[] array1[i];
				delete[] array2[i];
			}
			delete[] array1;
			array1 = nullptr;
			delete[] array2;
			array2 = nullptr;
		}

		TEST_METHOD(Equal_arrays_1_elem)
		{

			int ** array1 = new int*[1];
			int ** array2 = new int*[1];
			for (size_t i = 0; i < 1; i++)
			{
				array2[i] = new int[1];
			}

			array1[0] = new int[1]{ 1};
			
			int size = 1;
			int position = 1;
			full_array(array2, size, position);

			Assert::IsTrue(is_equal(array1, 1, array2, 1));
			for (size_t i = 0; i < 1; i++)
			{
				delete[] array1[i];
				delete[] array2[i];
			}
			delete[] array1;
			array1 = nullptr;
			delete[] array2;
			array2 = nullptr;
		}
	};
}