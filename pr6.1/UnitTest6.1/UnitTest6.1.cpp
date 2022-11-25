#include "pch.h"
#include "CppUnitTest.h"
#include "../pr6.1/pr6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s;

			const int SIZE = 20;
			int arr[SIZE];

			s = Sum(arr, SIZE);
			Assert::AreEqual(s, 0);
		}
	};
}
