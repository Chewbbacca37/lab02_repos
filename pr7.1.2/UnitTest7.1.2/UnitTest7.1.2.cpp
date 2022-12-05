#include "pch.h"
#include "CppUnitTest.h"
#include "../pr7.1.2/pr7.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest712
{
	TEST_CLASS(UnitTest712)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Low = -17;
			int High = 14;
			int rowCount = 7;
			int colCount = 9;

			int** a = new int* [rowCount];

			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			Create(a, rowCount, colCount, Low, High, 0, 0);
			Sort(a, rowCount, colCount, 0, 0);

			int S = 0;
			int k = 0;
			Assert::AreEqual(S, 0);
		}
	};
}
