#include "pch.h"
#include "CppUnitTest.h"
#include "../pr7.1.1/pr7.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest711
{
	TEST_CLASS(UnitTest711)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int rowCount = 7;
			int colCount = 9;
			int Low = -17;
			int High = 14;

			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			Create(a, rowCount, colCount, Low, High);
			Sort(a, rowCount, colCount);

			int S = 0;
			int k = 0;
			Calc(a, rowCount, colCount, S, k);
			Assert::AreEqual(S, -172);
		}
	};
}
