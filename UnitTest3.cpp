#include "pch.h"
#include "CppUnitTest.h"
#include "../STQA3/STQA3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(AllcUses_SomepUses)
	{
	public:
		TEST_METHOD(Test1)
		{
			int input = -1;
			std::string output = checkIQ(input);
			std::string expected = "Invalid";
			Assert::AreEqual(expected, output);
		}
	};
}
