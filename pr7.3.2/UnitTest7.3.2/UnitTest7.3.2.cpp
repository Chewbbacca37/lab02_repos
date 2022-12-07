#include "pch.h"
#include "CppUnitTest.h"
#include "../pr7.3.2/pr7.3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest732
{
	TEST_CLASS(UnitTest732)
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

			Create(a, rowCount, colCount, Low, High, 0, 0);
			Print(a, rowCount, colCount,0, 0);

			int t = 0;
			Maxmore1(a, rowCount, colCount, t, 0, 0, 0);

			Assert::AreEqual(t, 13);
		}
	};
}
