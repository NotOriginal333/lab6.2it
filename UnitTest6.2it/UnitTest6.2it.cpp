#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2it/lab6.2it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62it
{
	TEST_CLASS(UnitTest62it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int r[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

			int minIndex = 0;
			int maxIndex = 0;
			int result = Sum(r, n, minIndex, maxIndex);
			Assert::AreEqual(9, result);
		}
	};
}
