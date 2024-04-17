#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP3.3A/FuzzyNumberO.cpp"
#include "../OOP3.3A/FuzzyNumber.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumberO A(1, 2, 3);
			FuzzyNumberO B(2, 3, 4);
			FuzzyNumberO C;
			C = A + B;
			Assert::AreEqual(C.Get_x(), 3);
			Assert::AreEqual(C.Get_l(), 5);
			Assert::AreEqual(C.Get_r(), 7);
		}
	};
}
