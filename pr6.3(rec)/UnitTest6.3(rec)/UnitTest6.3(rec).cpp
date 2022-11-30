#include "pch.h"
#include "CppUnitTest.h"
#include "../pr6.3(rec)/pr6.3(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63rec
{
	TEST_CLASS(UnitTest63rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s;

			const int n = 20;
			int arr[n];

			s = Sum(arr, n, 0);
			Assert::AreEqual(s, -16);
		}
	};
}
