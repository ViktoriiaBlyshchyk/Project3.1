#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project3.1\Project3.1\Car.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Car c;
			double f = 20;
			f = c.Change1();
			Assert::AreEqual(c.Change1(), f);
		}
	};
}
