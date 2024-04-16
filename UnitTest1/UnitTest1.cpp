#include "pch.h"
#include "CppUnitTest.h"
#include "..\SoftwareArchGHA.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int test;
			auto result = testMethod(3);

			Assert::AreEqual(6, result);
		}
	};
}
