#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-5.1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double f=k(0, 1);
			Assert::AreEqual(1., f);
		}
	};
}
