#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5.1/pr5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1 
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = k(2.0, 3.0);
			Assert::AreEqual(t, 1);
		}
	};
}
