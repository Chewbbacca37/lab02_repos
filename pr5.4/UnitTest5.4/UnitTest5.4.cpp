#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5.4/pr5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = S0(1, 3);
			Assert::AreEqual(t, 1);
		}
	};
}
