#include "pch.h"
#include "CppUnitTest.h"
#include "../pr6.2(iter)/pr6.2(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 9;
			int arr[n];
			
			Create(arr, n);
			int min = arr[0];
			int minindex = 0;
			Min(arr, n, minindex);
			Assert::AreEqual(min, 41);


		}
	};
}
	