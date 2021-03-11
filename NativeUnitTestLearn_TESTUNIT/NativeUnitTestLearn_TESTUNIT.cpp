#include "pch.h"
#include "CppUnitTest.h"
#include "../StaticLibraryNativeUnitTestingLearn/NativeUnittesting.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeUnitTestLearnTESTUNIT
{
	TEST_CLASS(NativeUnitTestLearnTESTUNIT)
	{
	public:
		TEST_METHOD(AddTests)
		{
			Assert::AreEqual(4, Add(2, 2));
		}		
		TEST_METHOD(SubtractTests)
		{
			Assert::AreEqual(0, Subtract(2, 2));
		}
	};
}
