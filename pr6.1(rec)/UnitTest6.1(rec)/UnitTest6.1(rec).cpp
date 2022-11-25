#include "pch.h"
#include "CppUnitTest.h"
#include "../pr6.1(rec)/pr6.1(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rec
{
	TEST_CLASS(UnitTest61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s;

			const int SIZE = 20;
			int arr[SIZE];

			s = Sum(arr, SIZE, 0);
			Assert::AreEqual(s, -16);

		}
	};
}
