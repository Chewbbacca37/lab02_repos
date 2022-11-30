#include "pch.h"
#include "CppUnitTest.h"
#include "../pr6.2(rec)/pr6.2(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest622
{
	TEST_CLASS(UnitTest622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 9;
			int arr[n];

			Create(arr, n,  0);
			int min = arr[0];
			int minindex = 0;
			Min(arr, n, minindex, 0, min);
			Assert::AreEqual(min, 0);
		}
	};
}
