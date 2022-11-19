#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5.5/pr5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			int t;
			t = f(789, 1, depth);
			Assert::AreEqual(t, 24);
		}
	};
}
