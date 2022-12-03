#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.4(iter)/PR6.4(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest641
{
	TEST_CLASS(UnitTest641)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 9;
			int a[n];

			Create(a, n, -100, 100);
			int min = a[0];
			int minindex = 0;
			Min(a, n);
			Assert::AreEqual(min, -59);
		}
	};
}
