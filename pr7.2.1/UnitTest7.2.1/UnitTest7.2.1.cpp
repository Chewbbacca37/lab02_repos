#include "pch.h"
#include "CppUnitTest.h"
#include "../pr7.2.1/pr7.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest721
{
	TEST_CLASS(UnitTest721)
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

			Create(a, n, Low, High);
			int el = a[1][2];
			Print(a, n);
			Transponse(a, n);
			Assert::AreEqual(el, a[2][1]);
		}
	};
}
