#include "pch.h"
#include "CppUnitTest.h"
#include "Calculator.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace cppunittest
{
	TEST_CLASS(cppunittest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Calculator* c = new Calculator();
			int result = c->Calculate(3, '+', 2);
			Assert::AreEqual(5, result);
		}
	};
}
