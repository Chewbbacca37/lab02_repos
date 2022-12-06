#include "pch.h"
#include "CppUnitTest.h"
#include "../pr7.2.2/pr7.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest722
{
	TEST_CLASS(UnitTest722)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Low = -10;
			int High = 10;

			int n = 5;
			int** a = new int* [n];
			for (int i = 0; i < n; i++)
				a[i] = new int[n];

			Create(a, n, Low, High, 0, 0);
			int el = a[1][2];
			Print(a, n, 0, 0);
			Transponse(a, n, 0, 0);
			Assert::AreEqual(el, a[2][1]);
		}
	};
}
