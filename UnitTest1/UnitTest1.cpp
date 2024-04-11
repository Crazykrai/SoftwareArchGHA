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
			auto result = testMethod(4);

			Assert::AreEqual(6, result);
		}
	};
}
