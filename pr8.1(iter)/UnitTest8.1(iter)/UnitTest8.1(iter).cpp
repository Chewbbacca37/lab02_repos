#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4996 )

#include "pch.h"
#include "CppUnitTest.h"
#include "../pr8.1(iter)/pr8.1(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const size_t size = 256;
			char str[size] = "ononon";
			Assert::AreEqual(5, Count(str));
		}
	};
}
