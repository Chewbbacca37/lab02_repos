#include "pch.h"
#include "CppUnitTest.h"
#include "../pr7.3.1/pr7.3.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest731
{
	TEST_CLASS(UnitTest731)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Low = -10;
			int High = 20;

			int rowCount = 5;
			int colCount = 4;

			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			Create(a, rowCount, colCount, Low, High);
			Print(a, rowCount, colCount);

			int t = 0;
			Maxmore1(a, rowCount, colCount, t);

			Assert::AreEqual(t, 0);
		}
	};
}
