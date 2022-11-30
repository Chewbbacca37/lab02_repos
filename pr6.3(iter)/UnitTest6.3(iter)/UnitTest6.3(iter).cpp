#include "pch.h"
#include "CppUnitTest.h"
#include "../pr6.3(iter)/pr6.3(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63iter
{
	TEST_CLASS(UnitTest63iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s;

			const int n = 20;
			int arr[n];

			s = Sum(arr, n);
			Assert::AreEqual(s, -16);
		}
	};
}
