#include "pch.h"
#include "CppUnitTest.h"
#include "../pr6.4(rec)/pr6.4(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest642
{
	TEST_CLASS(UnitTest642)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 9;
			int a[n];

			Create(a, n, -100, 100, 0);
			int min = a[0];
			int minindex = 0;
			Min(a, n, 0, minindex, min);
			Assert::AreEqual(min, -88);
		}
	};
}
